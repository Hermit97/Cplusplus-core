	#VARIABLES: The registers have the following uses:
# %edi - Holds the index of the data item being examined
# %ebx - Largest data 
# %eax - Current data item
#
# The following memory locations are used:
#
# data_items - contains the item data. A 0 is used
#
#to terminate the data


	.section .data

data_items:	 #Data items
	.long 4, 67, 34, 222, 45, 75, 54, 255, 34, 44, 33, 22, 11, 66, 0
ending_address:	
	.long data_items + (14 * 4)

	.section .text

	.globl _start

_start: #Handling initial index
	movl $0, %edi					
	movl data_items(, %edi, 4), %eax
	movl %eax, %ebx

start_loop:
	cmpl $0, %eax
	je exit_loop
	incl %edi
	movl data_items(, %edi, 4), %eax
	cmpl %ebx, %eax
	jle start_loop
	movl %eax, %ebx
	jmp start_loop


exit_loop:
	movl $1, %eax
	int $0x80
	
