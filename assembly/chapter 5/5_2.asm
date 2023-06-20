assume cs:codesg
codesg segment
start:  mov ax,123
        mov bx,0
        mov cx,246
s:      add bx,ax
        loop s
        mov ax,bx
        mov ax,4C00H
        int 21H
codesg ends
end start