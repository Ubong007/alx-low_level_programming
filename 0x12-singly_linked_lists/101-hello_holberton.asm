extern printf; the C function, to be called

global   main
	  extern    printf
main:
	  mov   edi, fmt
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
format: db `Hello, Holberton\n`,0
