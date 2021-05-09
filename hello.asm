section .data
	msg db "hello aa", 0xa
	len equ $ - msg
section .text
	global _start

_start:
	movl %msg, %edx
	;mov edx, len
	;mov ecx, msg
	;mov ebx, 1
	;mov eax, 1
	;int 0x80
	;mov ebx, 0
	;mov eax, 1
	;int 0x80

