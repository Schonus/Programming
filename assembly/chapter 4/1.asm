code segment
assume cs:code

start: 
    mov ax,2
    add ax,ax
    add ax,ax

    mov ax,4C00H
    int 21h

code ends
end start