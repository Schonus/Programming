assume cs:code
code segment

start: 
    mov ax,0123H
    mov bx,0456H
    add ax,bx
    add ax,ax

    mov ax,4C00H
    int 21h

code ends
end start