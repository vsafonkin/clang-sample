section .data
    msg db 'hello, nasm', 0xa
    len equ $ - msg

section .text
    global _start

_start:
    ; write(1, msg, len)
    mov eax, 4       ; номер системного вызова write
    mov ebx, 1       ; дескриптор файла stdout
    mov ecx, msg     ; адрес сообщения
    mov edx, len     ; длина сообщения
    int 0x80         ; вызов прерывания ядра

    ; exit(0)
    mov eax, 1       ; номер системного вызова exit
    xor ebx, ebx     ; код возврата 0
    int 0x80         ; вызов прерывания ядра
