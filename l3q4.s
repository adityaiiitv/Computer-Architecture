 AREA program, CODE, READONLY
 ENTRY
 MRS R0,cpsr
 BIC R0,R0,#supermode
 ORR R0,R0,#usermode
 MSR cpsr_cxsf,R0
supermode DCD 0x1f
usermode DCD 0x10
 END