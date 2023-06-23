assume cs:code,ds:data
data segment
    db 'ElemEnts'
    db 'HelloWorld'
data ends

code segment
start:  mov ax,data
        mov ds,ax
        mov bx,0
        mov cx,8
        mov ah,0
    s:  mov al,[bx]
        and al,0DFH
        mov [bx],al
        inc bx
        loop s
        mov cx,10
    s0: mov al,[bx]
        or al,60H
        mov [bx],al
        inc bx
        loop s0

        mov ax,4C00H
        int 21H
code ends
end start