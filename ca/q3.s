 AREA lab1,CODE, READONLY
 ENTRY			   ; ENTRY IN CODE
 LDR R1,=0x3500	   ; ADDRESS 0x3500 IN R1
 MOV R2,#10		   ; VALUE 10 IN R2
 STR R2,[R1]	   ; STORE THE VALUE OF R2 IN ADDRESS AT R1
 LDR R4,=0x3504	   ; ADDRESS 0x3504 IN R4
 MOV R3,#20		   ; VALUE 20 IN R3
 STR R3,[R4]	   ; STORE THE VALUE OF R3 IN ADDRESS AT R4
 LDR R5,=0x4000	   ; LOAD THE VALUE AT ADDRESS 0x4000 IN R5
 LDR R2,[R1]	   ; LOAD THE VALUE AT ADDRESS AT R1 IN R2
 LDR R3,[R4]	   ; LOAD THE VALUE AT ADDRESS AT R4 IN R3
 ADD R6,R2,R3	   ; ADD R2 AND R3 TO STORE AT R6
 STR R6,[R5]	   ; STORE THE VALUE OF R6 AT ADDRESS IN R5
 END			   ; END OF CODE