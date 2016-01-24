// DO NOT EDIT THIS FILE
// EDIT generate.py INSTEAD

#include "generated.h"

char *lookup_mnemonic_for_operation(int operation){
	switch(operation){
		case OPER_RRC:	return "rrc";
		case OPER_SWPB:	return "swpb";
		case OPER_RRA:	return "rra";
		case OPER_SXT:	return "sxt";
		case OPER_PUSH:	return "push";
		case OPER_CALL:	return "call";
		case OPER_RETI:	return "reti";
		case OPER_JNE:	return "jne";
		case OPER_JEQ:	return "jeq";
		case OPER_JNC:	return "jnc";
		case OPER_JC:	return "jc";
		case OPER_JN:	return "jn";
		case OPER_JGE:	return "jge";
		case OPER_JL:	return "jl";
		case OPER_JMP:	return "jmp";
		case OPER_MOV:	return "mov";
		case OPER_ADD:	return "add";
		case OPER_ADDC:	return "addc";
		case OPER_SUBC:	return "subc";
		case OPER_SUB:	return "sub";
		case OPER_CMP:	return "cmp";
		case OPER_DADD:	return "dadd";
		case OPER_BIT:	return "bit";
		case OPER_BIC:	return "bic";
		case OPER_BIS:	return "bis";
		case OPER_XOR:	return "xor";
		case OPER_AND:	return "and";
		case OPER_NOP:	return "nop";
		case OPER_BR:	return "br";
		case OPER_RET:	return "ret";
		case OPER_POP:	return "pop";
		case OPER_CLR:	return "clr";
		default:	return 0;
	}
}

char *lookup_reg_string(int reg){
	switch(reg){
		case REG_PC:	return "pc";
		case REG_SP:	return "sp";
		case REG_SR:	return "sr";
		case REG_CG:	return "cg";
		case REG_R4:	return "r4";
		case REG_R5:	return "r5";
		case REG_R6:	return "r6";
		case REG_R7:	return "r7";
		case REG_R8:	return "r8";
		case REG_R9:	return "r9";
		case REG_R10:	return "r10";
		case REG_R11:	return "r11";
		case REG_R12:	return "r12";
		case REG_R13:	return "r13";
		case REG_R14:	return "r14";
		case REG_R15:	return "r15";
		default:	return 0;
	}
}

char *lookup_operation_const_name(int operation){
	switch(operation){
		case OPER_RRC:	 return "OPER_RRC";
		case OPER_SWPB:	 return "OPER_SWPB";
		case OPER_RRA:	 return "OPER_RRA";
		case OPER_SXT:	 return "OPER_SXT";
		case OPER_PUSH:	 return "OPER_PUSH";
		case OPER_CALL:	 return "OPER_CALL";
		case OPER_RETI:	 return "OPER_RETI";
		case OPER_JNE:	 return "OPER_JNE";
		case OPER_JEQ:	 return "OPER_JEQ";
		case OPER_JNC:	 return "OPER_JNC";
		case OPER_JC:	 return "OPER_JC";
		case OPER_JN:	 return "OPER_JN";
		case OPER_JGE:	 return "OPER_JGE";
		case OPER_JL:	 return "OPER_JL";
		case OPER_JMP:	 return "OPER_JMP";
		case OPER_MOV:	 return "OPER_MOV";
		case OPER_ADD:	 return "OPER_ADD";
		case OPER_ADDC:	 return "OPER_ADDC";
		case OPER_SUBC:	 return "OPER_SUBC";
		case OPER_SUB:	 return "OPER_SUB";
		case OPER_CMP:	 return "OPER_CMP";
		case OPER_DADD:	 return "OPER_DADD";
		case OPER_BIT:	 return "OPER_BIT";
		case OPER_BIC:	 return "OPER_BIC";
		case OPER_BIS:	 return "OPER_BIS";
		case OPER_XOR:	 return "OPER_XOR";
		case OPER_AND:	 return "OPER_AND";
		case OPER_NOP:	 return "OPER_NOP";
		case OPER_BR:	 return "OPER_BR";
		case OPER_RET:	 return "OPER_RET";
		case OPER_POP:	 return "OPER_POP";
		case OPER_CLR:	 return "OPER_CLR";
		default:	return "OPER_UNKNOWN";
	}
}

char *lookup_operand_size_const_name(int size){
	switch(size){
		case OPSIZE_8:	 return "OPSIZE_8";
		case OPSIZE_16:	 return "OPSIZE_16";
		default:	return "OPSIZE_UNKNOWN";
	}
}

char *lookup_operand_mode_const_name(int mode){
	switch(mode){
		case OPMODE_REGISTER:	 return "OPMODE_REGISTER";
		case OPMODE_INDEXED:	 return "OPMODE_INDEXED";
		case OPMODE_SYMBOLIC:	 return "OPMODE_SYMBOLIC";
		case OPMODE_ABSOLUTE:	 return "OPMODE_ABSOLUTE";
		case OPMODE_INDIRECT_REGISTER:	 return "OPMODE_INDIRECT_REGISTER";
		case OPMODE_INDIRECT_AUTOINC:	 return "OPMODE_INDIRECT_AUTOINC";
		case OPMODE_IMMEDIATE:	 return "OPMODE_IMMEDIATE";
		case OPMODE_JUMP:	 return "OPMODE_JUMP";
		default:	return "OPMODE_UNKNOWN";
	}
}

char *lookup_reg_const_name(int reg){
	switch(reg){
		case REG_PC:	 return "REG_PC";
		case REG_SP:	 return "REG_SP";
		case REG_SR:	 return "REG_SR";
		case REG_CG:	 return "REG_CG";
		case REG_R4:	 return "REG_R4";
		case REG_R5:	 return "REG_R5";
		case REG_R6:	 return "REG_R6";
		case REG_R7:	 return "REG_R7";
		case REG_R8:	 return "REG_R8";
		case REG_R9:	 return "REG_R9";
		case REG_R10:	 return "REG_R10";
		case REG_R11:	 return "REG_R11";
		case REG_R12:	 return "REG_R12";
		case REG_R13:	 return "REG_R13";
		case REG_R14:	 return "REG_R14";
		case REG_R15:	 return "REG_R15";
		default:	return "REG_UNKNOWN";
	}
}

