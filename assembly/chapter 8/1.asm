assume cs:code,ds:data
data segment
    dd 100001
    dw 100
    dw 0
data ends
code segment
start:
    mov ax,data
    mov ds,ax
    mov ax,ds:[0]
    mov dx,ds:[2]
    div word ptr ds:[4]
    mov ds:[6],ax
    
    mov ax,4C00H
    int 21H
code ends
end start