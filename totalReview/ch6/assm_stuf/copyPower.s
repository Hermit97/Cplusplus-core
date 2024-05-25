.section .text
.globl _start

_start:
    # First power call (3^3)
    pushl $3                # Push second argument (exponent)
    pushl $3                # Push first argument (base)
    call power              # Call power function
    addl $8, %esp           # Adjust stack pointer after the call
    movl %eax, %ebx         # Save the result in %ebx

    # Second power call (2^2)
    pushl $2                # Push second argument (exponent)
    pushl $2                # Push first argument (base)
    call power              # Call power function
    addl $8, %esp           # Adjust stack pointer after the call
    addl %eax, %ebx         # Add result to the accumulated result in %ebx

    # Third power call (4^2)
    pushl $2                # Push second argument (exponent)
    pushl $4                # Push first argument (base)
    call power              # Call power function
    addl $8, %esp           # Adjust stack pointer after the call
	pop %ebx
    addl %eax, %ebx         # Add result to the accumulated result in %ebx

    # Exit with the final result in %ebx
    movl $1, %eax           # Set up exit system call
    int $0x80               # Call kernel to exit

# Power function
.type power, @function
power:
    pushl %ebp              # Save old base pointer
    movl %esp, %ebp         # Set new base pointer
    subl $4, %esp           # Allocate space for local variable

    movl 8(%ebp), %ebx      # Move first argument (base) to %ebx
    movl 12(%ebp), %ecx     # Move second argument (exponent) to %ecx
    movl %ebx, -4(%ebp)     # Store base in local storage

    movl $1, %eax           # Initialize result to 1

power_loop_start:
    cmpl $0, %ecx           # Compare exponent with 0
    je end_power            # If exponent is 0, jump to end
    imull -4(%ebp), %eax    # Multiply result by base
    decl %ecx               # Decrease exponent by 1
    jmp power_loop_start    # Repeat loop

end_power:
    movl %eax, %ebp         # Move final result to %ebp (return value)
    movl %ebp, %esp         # Restore stack pointer
    popl %ebp               # Restore base pointer
    ret                     # Return with result in %eax
