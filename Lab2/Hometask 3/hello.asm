.model tiny
.data
 data1 db 23
 data2 dw 9999h
 data3 dw 9999h
 array dw 01,02,03,04,05,06,07,08,09

.code
.startup
  mov BX, data2
  mov CX, data3
  mov data1, BL
  mov DL, data1
  mov DI,0002h
  mov AX, array[DI]

.exit
end