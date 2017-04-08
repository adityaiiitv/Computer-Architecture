 AREA program, CODE, READONLY
 ENTRY
 LDR r8,=0x900
 MOV r0,#4
 MOV r1,#8
 MOV r2,#15
 MOV r3,#16
 MOV r4,#23
 MOV r5,#42
 MOV r6,#108
 MOV r7,#6
 STMIA r8,{r0-r7}
 END