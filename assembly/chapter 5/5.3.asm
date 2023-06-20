assume cs:codesg
codesg segment
start:  mov ax,0ffffH
        mov ds,ax
        mov cx,000CH
        mov bx,cx
        mov ax,0
s:      sub bx,1
        mov al,[bx]
        add dx,ax
        loop s
        mov ax,4C00H
        int 21H
codesg ends
end start