section .text
    global main
    extern printf

main:
    mov   edi, msg
    xor   eax, eax  ; Add this line
    call  printf
    mov   eax, 0x60 ; The syscall number for sys_exit
    xor   edi, edi  ; Exit code 0
    syscall         ; Call the kernel

section .data
    msg db 'Hello, Holberton', 0xa, 0
