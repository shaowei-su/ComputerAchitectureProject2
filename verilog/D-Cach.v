D-Cache：
module    D_Cache(
    // control signal
    input                        clock,                // cache clock, the same as cpu
    input                        rst,                    // cache reset
    // dram side(write)
    output                     dram_wr_req,        //    request writing data to dram，  写到内存的请求
    output         [31:0]  dram_wr_addr,        //    write data address，            要写到内存的地址
    output reg   [31:0] dram_wr_data,        //    write data，                    要写入内存的数据
    input                        dram_wr_val,        //    write a word valid，            将cache的值写入内存有效
    // dram side(read)
    output                     dram_rd_req,        //    request reading data from dram，读数据的请求
    output         [31:0]  dram_rd_addr,        //    read data address，             读数据的地址
    input            [31:0] dram_rd_data,        //    read data，                     这是从内存中得到的数据
    input                       dram_rd_val,        //    read a word valid，             从内存中读数据有效
    // cpu side
    input            [31:0] cpu_addr,            // cpu address，cpu，              读或者写到cache的地址
    input                       data_req,            // data request，                  数据请求
    input                        wren,                    // write/read，                    读或者写
    input            [31:0]  cpu_wr_data,        // write data come from cpu，      要写到内存的地址
    output        [31:0]    cpu_rd_data,        // read data and send to cpu，     要读的数据，要送到cpu
    output                      hit,                    // cache hit or miss，             是否命中
    output                      ram_abort            // waiting for cache，cache，      没有命中的话，那么就要等到内存中的值写到cache，此时周期暂停
    );
    
    parameter        BLOCK_SIZE    =    8;       //描述Cache的三个状态
    parameter        CPU_EXEC        =    0;
    parameter        WR_DRAM        =    1;
    parameter        RD_DRAM        =    2;
    
    integer    i;
    
    reg        [1:0]            state;                        // FSM，                                        状态机
    wire        [275:0]        D_SRAM_block;                // { state(1), dirty(1), tag(18), data(8*32) }，一个block
    reg        [31:0]        D_SRAM_word;                // one word of the block，                      块中的一个字
    wire                        dirty;                        // dirty bit，                                  脏位
    reg        [17:0]        tag_bak;                        // data cache block tag bake up，               为了信号对称所暂时存储的寄存器
    reg        [31:0]        cpu_addr_bak;                // cpu address bake up，                        cpu地址，临时存储
    reg        [31:0]        cpu_wr_data_bak;            // cpu write data bake up，                     cpu写的地址存储
    reg                        cpu_wr_wait_flag;            // cpu write wait flag，                        cpu等待的标志
    wire                        dram_wr_ready;                // dram write data ready，                      要写入内存的数据准备好了
    wire                        dram_rd_ready;                // dram read data ready，                       要从内存中读的数据已经准备好了
    reg                        dram_rd_req_dly;            // reading request delay，                      读请求的信号延迟
    reg        [31:0]        wr_counter,rd_counter;    // counter for block，                          读和写的计数器
    reg        [31:0]        dram_data_shift[7:0];    // 8*32 shift registers，                       移位寄存器，存储整个快
        
    reg        [275:0]        D_SRAM[511:0];                // the data_cache storage space，               构造data cache
    
    
    // phisical write/read address for dram
    assign    dram_wr_addr    =    {2'b0,tag_bak,cpu_addr_bak[13:5],3'b0};  //内存的写的地址
    assign    dram_rd_addr    =    {2'b0,cpu_addr_bak[31:5],3'b0};          //内存的读的地址
        
    // cpu/dram writes data_cache，将cpu或者内存的数据写到cache                             
    always@(posedge clock)
    begin
        if(rst)
        begin
            for(i=0;i<512;i=i+1)
                D_SRAM[i]    <=    0;
        end
        else if(dram_rd_ready)    // dram write cache block
        begin
            // add your codes here...
            // 将主存的数据块写入D-Cache的某一数据块(xx_bak)

           //First place to add
            D_SRAM[cpu_addr_bak[13:5]]    <= {    2'b10, cpu_addr_bak[31:14], 
                                                         dram_data_shift[7],dram_data_shift[6],
                                                         dram_data_shift[5],dram_data_shift[4],
                                                         dram_data_shift[3],dram_data_shift[2],
                                                         dram_data_shift[1],dram_data_shift[0]};
          //Added by ChenYu

        end
        else if( hit & data_req & wren )
        begin
            // wirte dirty bit
            D_SRAM[cpu_addr[13:5]][274]    <=    1'b1;
            // add your codes here...
            // 正常命中情况下，CPU向D-Cache某个块的写入一个字

//Second place,added by ChenYu
            case(cpu_addr[4:2])
            0:    D_SRAM[cpu_addr[13:5]][31:0]      <=  cpu_wr_data;//将cpu要写入的数据写入到D_SRAM
            1:    D_SRAM[cpu_addr[13:5]][63:32]     <=  cpu_wr_data;
            2:    D_SRAM[cpu_addr[13:5]][95:64]     <=  cpu_wr_data;
            3:    D_SRAM[cpu_addr[13:5]][127:96]    <=  cpu_wr_data;
            4:    D_SRAM[cpu_addr[13:5]][159:128]   <=  cpu_wr_data;
            5:    D_SRAM[cpu_addr[13:5]][191:160]   <=  cpu_wr_data;
            6:    D_SRAM[cpu_addr[13:5]][223:192]   <=  cpu_wr_data;
            7:    D_SRAM[cpu_addr[13:5]][255:224]   <=  cpu_wr_data;
            default:D_SRAM[cpu_addr[13:5]][31:0] <=  cpu_wr_data;
        endcase
//Added by ChenYu

        end
        else if( cpu_wr_wait_flag & ( {dram_rd_req_dly,dram_rd_req} == 2'b10 ) )
        begin
            // wirte dirty bit
            D_SRAM[cpu_addr_bak[13:5]][274]    <=    1'b1;
//Third place,added by ChenYu
            // add your codes here...
         case(cpu_addr_bak[4:2])
            0: D_SRAM[cpu_addr_bak[13:5]][31:0]      <=  cpu_wr_data_bak;//将cpu要写入的数据写入到D_SRAM
            1:    D_SRAM[cpu_addr_bak[13:5]][63:32]     <=  cpu_wr_data_bak;
            2:    D_SRAM[cpu_addr_bak[13:5]][95:64]     <=  cpu_wr_data_bak;
            3:    D_SRAM[cpu_addr_bak[13:5]][127:96]    <=  cpu_wr_data_bak;
            4:    D_SRAM[cpu_addr_bak[13:5]][159:128]   <=  cpu_wr_data_bak;
            5:    D_SRAM[cpu_addr_bak[13:5]][191:160]   <=  cpu_wr_data_bak;
            6:    D_SRAM[cpu_addr_bak[13:5]][223:192]   <=  cpu_wr_data_bak;
            7:    D_SRAM[cpu_addr_bak[13:5]][255:224]   <=  cpu_wr_data_bak;
            default:D_SRAM[cpu_addr_bak[13:5]][31:0] <= cpu_wr_data_bak;
           endcase                     
            // 发生缺失，将目标数据块搬入Cache后，使能CPU之前，向D-Cache写入原数据cpu_wr_data的备份（xx_bak）
   //Added by ChenYu
        end
    end

    // data_cache writes dram
    always@(posedge clock)
        if(rst)
            dram_wr_data    <=    0;
        else if( dram_wr_req )
        begin
        
            //Forth place,added by ChenYu.这里我将写入的块为cpu_addr_bak里的
            // add your codes here...
            // 取出D-Cache中想要的块，逐字赋值给dram_wr_data写入主存
         case(wr_counter[2:0])//cpu_addr_bak[4:2]) 
                0:  dram_wr_data <= D_SRAM[cpu_addr_bak[13:5]][31:0];//将cpu要写入的数据写入到D_SRAM
                1:  dram_wr_data <= D_SRAM[cpu_addr_bak[13:5]][63:32];
                2:  dram_wr_data <= D_SRAM[cpu_addr_bak[13:5]][95:64];
                3:  dram_wr_data <= D_SRAM[cpu_addr_bak[13:5]][127:96];
                4:  dram_wr_data <= D_SRAM[cpu_addr_bak[13:5]][159:128];
                5:  dram_wr_data <= D_SRAM[cpu_addr_bak[13:5]][191:160];
                6:  dram_wr_data <= D_SRAM[cpu_addr_bak[13:5]][223:192];
                7:  dram_wr_data <= D_SRAM[cpu_addr_bak[13:5]][255:224];
            default:dram_wr_data <= D_SRAM[cpu_addr_bak[13:5]][31:0];
           endcase 
//Added by ChenYu            
        end
    
    // cpu read data_cache        
    assign    cpu_rd_data        =    D_SRAM_word;
    assign    D_SRAM_block    =    D_SRAM[cpu_addr[13:5]];
    
    always@(posedge clock)
    begin
        if(rst)
            D_SRAM_word <= 0;
        else if( hit & data_req & ~wren )
        begin
            // add your codes here...
            // 从目标块D_SRAM_block中取出正确的字D_SRAM_word，用于CPU读

//Fifth place,added by ChenYu
      case(cpu_addr[4:2])
                0:  D_SRAM_word <= D_SRAM_block[31:0];                               
                1:  D_SRAM_word <= D_SRAM_block[63:32];
                2:  D_SRAM_word <= D_SRAM_block[95:64];
                3:  D_SRAM_word <= D_SRAM_block[127:96];
                4:  D_SRAM_word <= D_SRAM_block[159:128];
                5:  D_SRAM_word <= D_SRAM_block[191:160];
                6:  D_SRAM_word <= D_SRAM_block[223:192];
                7:  D_SRAM_word <= D_SRAM_block[255:224];
            default:D_SRAM_word= D_SRAM_block[31:0];
           endcase 
//Added by ChenYu

        end
    end
    
    // set hit and dirty bit(if the block has been changed by cpu)
    assign    hit = D_SRAM_block[275] & (cpu_addr[31:14]==D_SRAM_block[273:256]);    
    assign    dirty    =    D_SRAM_block[274];

    // write/read data_cache miss, waiting...
    assign    ram_abort = ( dram_wr_req || dram_rd_req || dram_rd_req_dly );
    
    // data_cache state machine
    always@(posedge clock)
    begin
        if(rst)
            state    <=    CPU_EXEC;
        else
            case(state)
                CPU_EXEC:if( ~hit & dirty & data_req )    // dirty block write back to dram
                            state    <=    WR_DRAM;
                        else if( ~hit & data_req )        // request new block from dram
                            state    <=    RD_DRAM;
                        else
                            state    <=    CPU_EXEC;
                WR_DRAM:if(dram_wr_ready)
                            state    <=    RD_DRAM;
                        else
                            state    <=    WR_DRAM;
                RD_DRAM:if(dram_rd_ready)
                            state    <=    CPU_EXEC;    
                        else
                            state    <=    RD_DRAM;
                default:    state    <=    CPU_EXEC;    
            endcase
    end
    
    // dram write/read request
    assign    dram_wr_req    =    ( WR_DRAM == state );
    assign    dram_rd_req    =    ( RD_DRAM == state );
    
    // dram read request delay
    always@(posedge clock)
        dram_rd_req_dly    <=    dram_rd_req;
    
    // cpu tag bake up
    always@(posedge clock)
    begin
        if( rst )
            tag_bak    <=    0;
        else if( ( ~hit & dirty & data_req ) & ~dram_wr_req & ~dram_rd_req )
            tag_bak    <=    D_SRAM_block[273:256];
    end

    // cpu address bake up
    always@(posedge clock)
    begin
        if( rst )
            cpu_addr_bak    <=    0;
        else if( ( ~hit & dirty & data_req & wren ) | ( ~hit & data_req ) )
            cpu_addr_bak    <=    cpu_addr;
    end
    
    // cpu write data bake up
    always@(posedge clock)
    begin
        if( rst )
            cpu_wr_data_bak    <=    0;
        else if( ~hit & data_req & wren )
            cpu_wr_data_bak    <=    cpu_wr_data;
    end
    
    // cpu write wait flag(wait until target block has been moved to cache)
    always@(posedge clock)
    begin
        if( rst )
            cpu_wr_wait_flag    <=    0;
        else if( ~hit & data_req & wren )
            cpu_wr_wait_flag    <=    1;
        else if( ~dram_wr_req & ~dram_rd_req )
            cpu_wr_wait_flag    <=    0;
    end
    
    // block counter
    always@(posedge clock)
    begin
        if( rst )
        begin
            wr_counter    <=    0;
            rd_counter    <=    0;
        end
        else
        begin
            if( dram_wr_ready  )
                wr_counter    <=    0;
            else if( dram_wr_val & dram_wr_req )
                wr_counter    <=    wr_counter + 1'b1;
            if( dram_rd_ready  )
                rd_counter    <=    0;
            else if( dram_rd_val & dram_rd_req  )
                rd_counter    <=    rd_counter + 1'b1;
        end
    end
    
    // count to BLOCK_SIZE
    // add your codes here...
    // 对dram_wr_ready和dram_rd_ready进行assign赋值
   
//Sixth place,added by ChenYu,对于ready进行赋值
   assign dram_wr_ready = (BLOCK_SIZE == wr_counter);
    assign dram_rd_ready = (BLOCK_SIZE == rd_counter);
//Added by ChenYu    

    // dram data buffer
    always@(posedge clock)
    
//Seventh place,added by ChenYu.对于移位寄存器进行赋值 
    begin
        // add your codes here...
        // 8*32的移位寄存器dram_data_shift
       if( rst )
        begin
            dram_data_shift[0]    <=    0;
            dram_data_shift[1]    <=    0;
            dram_data_shift[2]    <=    0;
            dram_data_shift[3]    <=    0;
            dram_data_shift[4]    <=    0;
            dram_data_shift[5]    <=    0;
            dram_data_shift[6]    <=    0;
            dram_data_shift[7]    <=    0;
        end
        else if( dram_rd_ready )
        begin
            dram_data_shift[0]    <=    0;
            dram_data_shift[1]    <=    0;
            dram_data_shift[2]    <=    0;
            dram_data_shift[3]    <=    0;
            dram_data_shift[4]    <=    0;
            dram_data_shift[5]    <=    0;
            dram_data_shift[6]    <=    0;
            dram_data_shift[7]    <=    0;
        end
        else if(dram_rd_val)
        begin
            dram_data_shift[0]    <=    dram_data_shift[1];
            dram_data_shift[1]    <=    dram_data_shift[2];
            dram_data_shift[2]    <=    dram_data_shift[3];
            dram_data_shift[3]    <=    dram_data_shift[4];
            dram_data_shift[4]    <=    dram_data_shift[5];
            dram_data_shift[5]    <=    dram_data_shift[6];
            dram_data_shift[6]    <=    dram_data_shift[7];
            dram_data_shift[7]    <=    dram_rd_data;
        end
    end
//Added by ChenYu,seventh place,end.    
    
endmodule
