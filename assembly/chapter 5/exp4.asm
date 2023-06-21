assume cs:code
code segment
start:  mov ax,0
        mov ds,ax
        mov bx,23FH
        mov cx,3FH
s:      mov [bx],cl
        dec bx
        loop s
        mov [bx],cl
        mov ax,4c00H
        int 21h
code ends
end start