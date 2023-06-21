assume cs:code
code segment
start:  mov ax,0
        mov ds,ax
        mov bx,240H
        mov cx,40H
s:      dec bx
        mov [bx],bl
        loop s
        mov ax,4c00H
        int 21h
code ends
end start