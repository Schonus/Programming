assume cs:code,ds:data
data segment
    db 8,11,8,1,8,5,63,38
data ends
code segment
start:  mov ax,data
        mov ds,ax
        mov bx,0
        mov ax,0
        mov cx,0
        s:  mov cl, byte ptr [bx]
            cmp cl,8
            jcxz t
            jne next
            inc ax
        next:   inc bx
                inc cx
                loop s
        t:  mov ax,4c00H
            int 21h
code ends
end start