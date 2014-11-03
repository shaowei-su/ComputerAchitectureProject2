`include "config.v"

module data_cache_L1(
	//control
	input CLK,
	input RESET,

	//memory write
	output mem_write_req,
	output [31:0] mem_write_addr,
	output reg [255:0] mem_write_data,
	input mem_write_valid,
	//memory read
	output mem_read_req,
	output [31:0] mem_read_addr,
	input [255:0] mem_read_data,
	input mem_read_valid,
	//processor side
	input [31:0] data_write_2C,
    input [31:0] data_address_2C,
	input [1:0] data_write_size_2C,
    output [31:0] data_read_fC,
	input cache_read,
	input cache_write,
	output miss
	);

	parameter NOACCESS = 0;
	parameter MEM_WR = 1;
	parameter MEM_RD = 2;

	reg [275:0] dcache1[511:0];
	reg [275:0] dcache2[511:0];
	wire mem_read_ready;
	wire mem_read_loaded;
	reg  wr_wait;
	reg [31:0] saved_data;
	reg [31:0] saved_addr;
	reg [17:0] saved_tag;	
	reg [275:0] dcache_data[1:0];
	reg [31:0] dcache_word;
	//reg [31:0] dcache_word1;
	//reg [31:0] dcache_word2;
	reg [1:0] state;
	//wire dirty;
	wire dirty1, dirty2;
	integer i;
	wire hit1, hit2;
	wire set_choose;
	wire data_req;
	reg start_count;
	reg [31:0] counter;
	wire miss;
	wire hit;

	reg [255:0] mem_read_data_local;

	assign miss = ((!hit) & data_req );

	reg [31:0] LRUcounter1[511:0];
	reg [31:0] LRUcounter2[511:0];

	assign hit = hit1 | hit2;
	assign data_req = cache_write | cache_read;

	assign mem_write_addr = {saved_tag,saved_addr[13:5],5'b0};
	assign mem_read_addr = {data_address_2C[31:5], 5'b0};

	assign data_read_fC = dcache_word;
	assign dcache_data[0] = dcache1[data_address_2C[13:5]];
	assign dcache_data[1] = dcache2[data_address_2C[13:5]];

	assign hit1 = (dcache_data[0][275]&(data_address_2C[31:14]==dcache_data[0][273:256]));
	assign hit2 = (dcache_data[1][275]&(data_address_2C[31:14]==dcache_data[1][273:256]));

	assign dirty1 = dcache_data[0][274];
	assign dirty2 = dcache_data[1][274];

	assign mem_write_req = (MEM_WR == state);
	assign mem_read_req = (MEM_RD == state);

	assign mem_read_loaded = (counter == 8);
	assign mem_read_ready = (counter == 7);



	initial
	begin
		for(i=0;i<512;i=i+1)
		begin
			dcache1[i] = 0;
			dcache2[i] = 0;
			LRUcounter1[i] = 0;
			LRUcounter2[i] = 0;
		end  
	end

	always@(posedge CLK)
	begin
		if(hit1&data_req)
		begin
			LRUcounter1[data_address_2C[13:5]] <= 0;
			LRUcounter2[data_address_2C[13:5]] <= LRUcounter2[data_address_2C[13:5]] + 1;
		end
		else if(hit2&data_req)
		begin
			LRUcounter2[data_address_2C[13:5]] <= 0;
			LRUcounter1[data_address_2C[13:5]] <= LRUcounter1[data_address_2C[13:5]] + 1;
		end
	end

	always@(posedge CLK)
	begin
		if(mem_read_valid)
			begin
			mem_read_data_local <= mem_read_data;
			$display("DCACHE: now get block %x", mem_read_data);
			end

		if(mem_read_ready)
		begin
			if(set_choose == 0)
				dcache1[saved_addr[13:5]] <= {2'b10,saved_addr[31:14],mem_read_data_local};
			else
				dcache2[saved_addr[13:5]] <= {2'b10,saved_addr[31:14],mem_read_data_local};

			$display("DCACHE: store block %x to data cache at addr %x", mem_read_data_local, saved_addr);

		end
		else if(hit&cache_write)
		begin
			$display("DCACHE: store word %x to data cache", data_write_2C);
			if(hit1)
			begin
				dcache1[data_address_2C[13:5]][274] <= 1'b1;

				case(data_address_2C[4:2])
				0: dcache1[data_address_2C[13:5]][255:224] <= data_write_2C;
				1: dcache1[data_address_2C[13:5]][223:192] <= data_write_2C;
				2: dcache1[data_address_2C[13:5]][191:160] <= data_write_2C;
				3: dcache1[data_address_2C[13:5]][159:128] <= data_write_2C;
				4: dcache1[data_address_2C[13:5]][127:96] <= data_write_2C;
				5: dcache1[data_address_2C[13:5]][95:64] <= data_write_2C;
				6: dcache1[data_address_2C[13:5]][63:32] <= data_write_2C;
				7: dcache1[data_address_2C[13:5]][31:0] <= data_write_2C;
				default: dcache1[data_address_2C[13:5]][255:224] <= data_write_2C;
				endcase
			end

			else if(hit2)
			begin
				dcache2[data_address_2C[13:5]][274] <= 1'b1;

				case(data_address_2C[4:2])
				0: dcache2[data_address_2C[13:5]][255:224] <= data_write_2C;
				1: dcache2[data_address_2C[13:5]][223:192] <= data_write_2C;
				2: dcache2[data_address_2C[13:5]][191:160] <= data_write_2C;
				3: dcache2[data_address_2C[13:5]][159:128] <= data_write_2C;
				4: dcache2[data_address_2C[13:5]][127:96] <= data_write_2C;
				5: dcache2[data_address_2C[13:5]][95:64] <= data_write_2C;
				6: dcache2[data_address_2C[13:5]][63:32] <= data_write_2C;
				7: dcache2[data_address_2C[13:5]][31:0] <= data_write_2C;
				default: dcache2[data_address_2C[13:5]][255:224] <= data_write_2C;
				endcase
			end
		end

		if(wr_wait&mem_read_loaded)
		begin

			$display("DCACHE: store saved data %x to cache", saved_data);
			if(set_choose == 0)
			begin
				dcache1[saved_addr[13:5]][274] <= 1'b1;


				case(saved_addr[4:2])
				0: dcache1[saved_addr[13:5]][255:224] <= saved_data;
				1: dcache1[saved_addr[13:5]][223:192] <= saved_data;
				2: dcache1[saved_addr[13:5]][191:160] <= saved_data;
				3: dcache1[saved_addr[13:5]][159:128] <= saved_data;
				4: dcache1[saved_addr[13:5]][127:96] <= saved_data;
				5: dcache1[saved_addr[13:5]][95:64] <= saved_data;
				6: dcache1[saved_addr[13:5]][63:32] <= saved_data;
				7: dcache1[saved_addr[13:5]][31:0] <= saved_data;
				default: dcache1[saved_addr[13:5]][255:224] <= saved_data;
				endcase
			end
			else
			begin
				dcache2[saved_addr[13:5]][274] <= 1'b1;

				case(saved_addr[4:2])
				0: dcache2[saved_addr[13:5]][255:224] <= saved_data;
				1: dcache2[saved_addr[13:5]][223:192] <= saved_data;
				2: dcache2[saved_addr[13:5]][191:160] <= saved_data;
				3: dcache2[saved_addr[13:5]][159:128] <= saved_data;
				4: dcache2[saved_addr[13:5]][127:96] <= saved_data;
				5: dcache2[saved_addr[13:5]][95:64] <= saved_data;
				6: dcache2[saved_addr[13:5]][63:32] <= saved_data;
				7: dcache2[saved_addr[13:5]][31:0] <= saved_data;
				default: dcache2[saved_addr[13:5]][255:224] <= saved_data;
				endcase
			end
		end
	end

	always@(posedge CLK or negedge RESET)
	begin
		if(!RESET)
			mem_write_data <= 0;
		else if (mem_write_req)
		begin

			if(set_choose == 0)
				begin
				mem_write_data <= dcache1[saved_addr[13:5]][255:0];
				$display("DCACHE: write block %x to memory",dcache1[saved_addr[13:5]][255:0]);
				end
			else
				begin
				mem_write_data <= dcache2[saved_addr[13:5]][255:0];
				$display("DCACHE: write block %x to memory",dcache2[saved_addr[13:5]][255:0]);
				end
		end
	end

	always@(*)
		begin

			if(hit1)
			begin
				$display("DCACHE: now get the data %x at hit1", dcache_data[0]);
				case(saved_addr[4:2])
					0: dcache_word = dcache_data[0][255:224];
					1: dcache_word = dcache_data[0][223:192];
					2: dcache_word = dcache_data[0][191:160];
					3: dcache_word = dcache_data[0][159:128];
					4: dcache_word = dcache_data[0][127:96];
					5: dcache_word = dcache_data[0][95:64];
					6: dcache_word = dcache_data[0][63:32];
					7: dcache_word = dcache_data[0][31:0];
					default: dcache_word = dcache_data[0][255:224];
				endcase
			end
			if(hit2)
			begin
				$display("DCACHE: now get the data %x at hit2", dcache_data[1]);
				case(saved_addr[4:2])
					0: dcache_word = dcache_data[1][255:224];
					1: dcache_word = dcache_data[1][223:192];
					2: dcache_word = dcache_data[1][191:160];
					3: dcache_word = dcache_data[1][159:128];
					4: dcache_word = dcache_data[1][127:96];
					5: dcache_word = dcache_data[1][95:64];
					6: dcache_word = dcache_data[1][63:32];
					7: dcache_word = dcache_data[1][31:0];
					default: dcache_word = dcache_data[1][255:224];
				endcase
			end
		end


	//assign dcache_word = hit1?dcache_word1:dcache_word2;
/*	always@(*)
				case(data_address_2C[4:2])
					0: dcache_word = hit1?dcache_data[0][255:224]:dcache_data[1][255:224];
					1: dcache_word = hit1?dcache_data[0][223:192]:dcache_data[1][223:192];
					2: dcache_word = hit1?dcache_data[0][191:160]:dcache_data[1][191:160];
					3: dcache_word = hit1?dcache_data[0][159:128]:dcache_data[1][159:128];
					4: dcache_word = hit1?dcache_data[0][127:96]:dcache_data[1][127:96];
					5: dcache_word = hit1?dcache_data[0][95:64]:dcache_data[1][95:64];
					6: dcache_word = hit1?dcache_data[0][63:32]:dcache_data[1][63:32];
					7: dcache_word = hit1?dcache_data[0][31:0]:dcache_data[1][31:0];
					default: dcache_word = hit1?dcache_data[0][255:224]:dcache_data[1][255:224];
				endcase
*/
/*	always@(*)
				case(data_address_2C[4:2])
					0: dcache_word2 = dcache_data[1][255:224];
					1: dcache_word2 = dcache_data[1][223:192];
					2: dcache_word2 = dcache_data[1][191:160];
					3: dcache_word2 = dcache_data[1][159:128];
					4: dcache_word2 = dcache_data[1][127:96];
					5: dcache_word2 = dcache_data[1][95:64];
					6: dcache_word2 = dcache_data[1][63:32];
					7: dcache_word2 = dcache_data[1][31:0];
					default: dcache_word2 = dcache_data[1][255:224];
				endcase

*/

	always@(posedge CLK or negedge RESET)
	begin
		if(!RESET)
			state <= NOACCESS;
		else
			case(state)
				NOACCESS: 
					if((~hit & (set_choose==0) & dirty1) | (~hit & (set_choose==1) & dirty2) & data_req)
						state <= MEM_WR;
					else if(~hit & data_req)
						begin
							state <= MEM_RD;
							start_count <= 1;
						end
					else
						state <= NOACCESS;
				MEM_WR:
					if(mem_write_valid)
					begin
						state <= MEM_RD;
						start_count <= 1;
					end
					else
						state <= MEM_WR;
				MEM_RD:
					if(mem_read_ready)
						state <= NOACCESS;
					else
						state <= MEM_RD;
				default: state <= NOACCESS;
			endcase
	end

	always@(posedge CLK or negedge RESET)
	begin
		if(!RESET)
			begin
			saved_addr <=0;
			saved_data <= 0;
			saved_tag <= 0;
			end
		else
			begin
				if(~hit & (set_choose==0) & dirty1 & ~mem_write_req & ~mem_read_req & data_req)
					begin
					saved_tag <= dcache_data[0][273:256];
					$display("DCACHE:save tag %x",dcache_data[0][273:256]);
					end

				else if(~hit & (set_choose==1) & dirty2 & ~mem_write_req & ~mem_read_req & data_req)
					begin
					saved_tag <= dcache_data[1][273:256];
					$display("DCACHE:save tag %x",dcache_data[1][273:256]);	
					end
				if(~hit&data_req)
					begin
					saved_addr <= data_address_2C;
					$display("DCACHE:save addr %x", data_address_2C);
					end
				if(~hit&cache_write)
					begin
					saved_data <= data_write_2C;
					$display("DCACHE:save data %x", data_write_2C);
					end

			end
	end


	always@(posedge CLK or negedge RESET)
	begin
		if(!RESET)
			wr_wait <= 0;
		else if(~hit&cache_write)
			wr_wait <= 1;
		else if(~mem_read_req & ~mem_write_req)
			wr_wait <= 0;
	end


	always@(posedge CLK or negedge RESET)
	begin
		if(!RESET)
			counter <= 0;
		else if(start_count)
		begin
			counter <= counter + 1'b1;
			$display("DCACHE:Now counter is %x, mem_read_valid is %x, data_write_size_2C is %x, mem_read_addr is %x, mem_read_req is %x", counter+1, mem_read_valid, data_write_size_2C, mem_read_addr, mem_read_req);
		end

		if(mem_read_loaded)
		begin
			start_count <= 0;
			counter <= 0;
		end			
		

	end

	always@(*)
	begin
		set_choose = (LRUcounter1[data_address_2C[13:5]]>=LRUcounter2[data_address_2C[13:5]])?0:1;
	end

endmodule









