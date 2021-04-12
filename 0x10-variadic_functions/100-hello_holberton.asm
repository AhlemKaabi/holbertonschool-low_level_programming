section .data; static data

msg db "Hello, Holberton", 0Ah

section .text; code
	global main; must start like that
main:
	mov rax, 1; syscall write to rax
	mov rdi, 1; file descriptor 1(stdout)
	mov rsi, msg; second argument which is the message
	mov rdx, 17; number of bytes to write
	syscall; make the syscall
	mov rax,60; exit syscall to rax
	mov rdi, 0; exit without error
	syscall