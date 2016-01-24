// DO NOT EDIT THIS FILE
// EDIT generate.py INSTEAD

#ifndef GENERATED_H
#define GENERATED_H

enum {
	OPER_UNKNOWN = 0,
	OPER_RRC,
	OPER_SWPB,
	OPER_RRA,
	OPER_SXT,
	OPER_PUSH,
	OPER_CALL,
	OPER_RETI,
	OPER_JNE,
	OPER_JEQ,
	OPER_JNC,
	OPER_JC,
	OPER_JN,
	OPER_JGE,
	OPER_JL,
	OPER_JMP,
	OPER_MOV,
	OPER_ADD,
	OPER_ADDC,
	OPER_SUBC,
	OPER_SUB,
	OPER_CMP,
	OPER_DADD,
	OPER_BIT,
	OPER_BIC,
	OPER_BIS,
	OPER_XOR,
	OPER_AND,
	OPER_NOP,
	OPER_BR,
	OPER_RET,
	OPER_POP,
	OPER_CLR,
};

enum {
	REG_UNKNOWN = 0,
	REG_PC,
	REG_SP,
	REG_SR,
	REG_CG,
	REG_R4,
	REG_R5,
	REG_R6,
	REG_R7,
	REG_R8,
	REG_R9,
	REG_R10,
	REG_R11,
	REG_R12,
	REG_R13,
	REG_R14,
	REG_R15,
};

enum {
	OPSIZE_UNKNOWN = 0,
	OPSIZE_8,
	OPSIZE_16,
};

enum {
	OPMODE_UNKNOWN = 0,
	OPMODE_REGISTER,
	OPMODE_INDEXED,
	OPMODE_SYMBOLIC,
	OPMODE_ABSOLUTE,
	OPMODE_INDIRECT_REGISTER,
	OPMODE_INDIRECT_AUTOINC,
	OPMODE_IMMEDIATE,
	OPMODE_JUMP,
};

char *lookup_mnemonic_for_operation(int operation);
char *lookup_reg_string(int reg);
char *lookup_operation_const_name(int operation);
char *lookup_operand_size_const_name(int size);
char *lookup_operand_mode_const_name(int mode);
char *lookup_reg_const_name(int reg);
#endif
