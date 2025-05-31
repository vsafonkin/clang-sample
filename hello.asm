section .data
    msg db 'start /bin/sh', 0xa
    len equ $ - msg
    ; binsh db '/bin/sh', 0x00
    ; args dd binsh
    ;      dd 0x00

section .text
    global _start

_start:
    ; write(1, msg, len)
    mov eax, 4       ; номер системного вызова write
    mov ebx, 1       ; дескриптор файла stdout
    mov ecx, msg     ; адрес сообщения
    mov edx, len     ; длина сообщения
    int 0x80         ; вызов прерывания ядра

    ; execve("/bin/sh", ["/bin/sh", NULL], NULL)
    ; mov eax, 11      ; sys_execve
    ; mov ebx, binsh
    ; mov ecx, args
    ; xor edx, edx     ; envp = NULL
    ; int 0x80

    ; exit(0)
    mov eax, 1       ; номер системного вызова exit
    xor ebx, ebx     ; код возврата 0
    int 0x80         ; вызов прерывания ядра
