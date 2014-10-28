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
	wire [31:0] read_address;



	assign hit = icache_data[273] & (instr_addressIF[31:15] == icache_data[272:256]) ;

	always@(posedge CLK or negedge RESET)
	begin
		if(!RESET)
			for(i=0;i<1024;i=i+1)
				icache[i] <= 0;
		else if(mem_valid)
			icache[instr_addressIF[14:5]] <= {1'b1, instr_addressIF[31:15], mem_data};
	end

	always@(posedge CLK or negedge RESET)
	begin
		if(!RESET)
			read_address <= 0;
		else if((~hit)||mem_req)
			read_address <= read_address;
		else
			read_address <= instr_addressIF;
	end

	always@(posedge CLK or negedge RESET)
	begin
		if(!RESET)
		begin
		
			icache_data <= 0;
			mem_req <= 0;
			mem_address <= 0;
		end
		else begin
			if (~hit)
				mem_req <= 1;
			mem_address <= {2'b0,read_address[31:5],3'b0};
			if (hit)
				icache_data <= icache[read_address[14:5]];
			

		end	
	end

	always@(posedge CLK or negedge RESET)
	begin
		if(!RESET)
		begin
			instr_out <= 0;
		end
		else begin
		case(instr_addressIF[4:2])
			0: instr_out <= icache_data[31:0];
			1: instr_out <= icache_data[63:32];
			2: instr_out <= icache_data[95:64];
			3: instr_out <= icache_data[127:96];
			4: instr_out <= icache_data[159:128];
			5: instr_out <= icache_data[191:160];
			6: instr_out <= icache_data[223:192];
			7: instr_out <= icache_data[255:224];
			default: instr_out <= icache_data[31:0];
		endcase
		end
	end




endmodule