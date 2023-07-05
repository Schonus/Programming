assume cs:code,ds:data

data segment
    dd 1EF000H,210000H
data ends

code segment
start:  
    mov ax,data
    mov ds,ax
    mov si,0
    mov bx,[si]
    mov ax,[si+2]
    add si,4
    add bx,[si]
    adc ax,[si+2]
    mov ax,4c00H
    int 21h
code ends
end start