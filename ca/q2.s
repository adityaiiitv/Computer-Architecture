      AREA lab1, CODE, READONLY
      ENTRY			  ; ENTRY IN CODE
      LDR R1,=0x4020  ; ADDRESS 0x4020 IN R1
      LDR R2,val	  ; LOAD val IN R2
      STR R2,[R1]	  ; STORE THE CONTENTS OF R2 AT ADDRESS IN R1
val DCD 0xAEF67D90	  ; USING DCD
      END			  ; END OF CODE