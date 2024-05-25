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

data_length:
	.long 14

	.section .text

	.globl _start

_start: #Handling initial index
	movl $0, %edi					
	movl data_items(, %edi, 4), %eax
	movl %eax, %ebx

	#increment from 0 till end(14)
	movl $0, %ecx

start_loop:
	cmpl data_length, %ecx				#Compares .long 14 with ecx which is initally 0
	je exit_loop 						#If data_length and ecx are equal it will jump to the exit_loop
	incl %edi							#increment edi (index)
	incl %ecx							#increment ecx which is going to be compared with data_length again
	movl data_items(, %edi, 4), %eax	# move the data_item[index] value into eax (size 4)
	cmpl %ebx, %eax						#compares ebx (old value) with eax (new value)
	jle start_loop						#If eax < ebx then jump to start loop
	movl %eax, %ebx						#otherwise move eax to ebx (value)
	jmp start_loop 						#Then jump to the start of the loop to repeat the loop


exit_loop:
	movl $1, %eax						#Exit system call 1
	int $0x80
	
