assume cs:code
code segment
start:  mov ax,cs
        mov ds,ax
        mov ax,0020h
        mov es,ax
        mov cx,14H
s:      mov al,[bx]
        mov es:[bx],al
        inc bx
        loop s
        mov ax,4c00H
        int 21h
code ends
end start