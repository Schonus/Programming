assume cs:codesg
codesg segment
start:  mov ax,123
        mov bx,0
        add bx,7B00H
        mov cx,10
s:      sub bx,ax
        loop s
        mov ax,bx
        mov ax,4C00H
        int 21H
codesg ends
end start