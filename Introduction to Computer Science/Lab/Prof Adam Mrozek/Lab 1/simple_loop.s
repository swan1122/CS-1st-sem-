
.globl _start	# makes the label visible to the linker (ld/gcc)


#################################################################

.data

# memory allocation
# static data / variables

str:		.ascii	"- x iteration"
new_line:	.byte	0x0A
counter:	.byte	0
.equ		strlen , new_line + 1 - str

#################################################################


.text	

_start: movb $0, counter
# Implement a "C - like" FOR LOOP

loop_for:
	cmpb $10, counter

	jae end_for
		mov counter, %al
		add $48, %al #al-d+48
		mov %al, str+2

		mov $1, %eax
		mov $1, %edi
		mov $str, %rsi
		mov $strlen, %edx
		syscall

	incb counter
	jmp loop_for

# Execute n-times the body of the loop:
# invoke SYSTEM CALL no. 1 ("WRITE"), write the string with a proper iteration number
# to standard output (stdout).

# invoke SYSTEM CALL no. 60 ("EXIT"), return the error code.
end_for:
	mov $60, %eax
	xor %edi, %edi #%edi = 0
	syscall

mov	$60 , %eax
xor	%edi , %edi
syscall




