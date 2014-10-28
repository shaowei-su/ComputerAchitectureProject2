`include "config.v"

module instr_cache_L1(
	//processor side
	input CLK,
	input RESET,

	input [31:0] instr_addressIF,

	output reg [31:0] instr_out,
	output hit,
	//memory side
	input [255:0] mem_data,
	input mem_valid,

	output reg mem_req,
	output reg [31:0] mem_address

	);

	reg [273:0] icache [1023:0];
	reg [273:0] icache_data ;

	integer i;
	reg [31:0] counter;
	reg data_ready;
	reg start_count;




	assign hit = icache_data[273] & (instr_addressIF[31:15] == icache_data[272:256]) ;
	assign data_ready = (8==counter);

	initial
	begin
		for(i=0;i<1024;i=i+1)
		begin
			icache[i] = 0;
		end
	end



	always@(posedge CLK or negedge RESET)
	begin
		if(!RESET)
		begin
		
			icache_data <= 0;
			mem_req <= 0;
			mem_address <= 0;
			start_count <= 0;
		end
		else begin
			icache_data <= icache[instr_addressIF[14:5]];
			$display("ICACHE:Now hit is %x and mem_valid is %x", hit, mem_valid);
			if ((~hit)&(~mem_req))
			begin
				mem_req <= 1;
				mem_address <= instr_addressIF;
				start_count <= 1;
				
				$display("ICACHE:Now read from address %x",instr_addressIF);
			end
				
			if(mem_valid)
			begin
				mem_req <= 0;
				mem_address <=0;

			end
			if(data_ready)
			begin
				start_count <= 0;
				counter <= 0;
				icache[instr_addressIF[14:5]] <= {1'b1, instr_addressIF[31:15], mem_data};
				$display("ICACHE:Now save data: %x to %x, it is hit:%x", mem_data, instr_addressIF[14:5], hit);
			end
		end	
	end

	always@(*)
		case(instr_addressIF[4:2])
			7: instr_out = icache_data[31:0];
			6: instr_out = icache_data[63:32];
			5: instr_out = icache_data[95:64];
			4: instr_out = icache_data[127:96];
			3: instr_out = icache_data[159:128];
			2: instr_out = icache_data[191:160];
			1: instr_out = icache_data[223:192];
			0: instr_out = icache_data[255:224];
			default: instr_out = icache_data[255:224];
		endcase

	always@(posedge CLK or negedge RESET)
	begin
		if(!RESET)
			counter <= 0;
		else if(start_count)
		begin
			counter <= counter + 1'b1;
			$display("ICACHE:Now counter is %x", counter);
		end
			
	end




endmodule