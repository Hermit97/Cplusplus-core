	.section .data #this is instruction to the assembler itself becasue it starts with a period (.)  this is not translated into machine code. This list the memory data that you need for the program.

	.section .text #Program instructions live here.

	.globl _start #_start is a symbol meaning its going to be replaced by something later during the assembly or linking. They are also used to mark locations of programs or data. 

_start:
	movl $1, %eax #linux kernel command for exiting program

	#movl $0, %ebx
	movl $3, %ebx

	int $0x80

	#To assemble source file you have to do as exit.s -o exit.o
	#To link you have to ld exit.o -o exit
