assume cs:code,ds:data,ss:stack
stack segment
    db 16 dup 0
stack ends
data segment 
    db 77H,2,65H,2,6CH,2,63H,2,6FH,2,6DH,2,65H,2,20H,2,74H,2,6FH,2,20H,2,6DH,2,61H,2,73H,2,6DH,2,21H,2
    db 77H,36,65H,36,6CH,36,63H,36,6FH,36,6DH,36,65H,36,20H,36,74H,36,6FH,36,20H,36,6DH,36,61H,36,73H,36,6DH,36,21H,36
    db 77H,113,65H,113,6CH,113,63H,113,6FH,113,6DH,113,65H,113,20H,113,74H,113,6FH,113,20H,113,6DH,113,61H,113,73H,113,6DH,113,21H,113
data ends
code segment
start:  mov bx,0780H
        mov ax,data
        mov ds,ax
        mov ax,0B800H
        mov es,ax
        mov ax,stack
        mov ss,ax
        mov sp,16
        mov cx,4000
        s1: mov word ptr es:[si],0
            add si,2
        loop s1
        mov cx,3
        s:  push cx
            mov cx,16
            mov si,64
            s0: mov ax,word ptr ds:[di]
                mov word ptr es:[bx+si],ax
                add di,2
                add si,2
            loop s0
            add bx,0A0H
            pop cx
        loop s
        mov ax,4c00H
        int 21h
code ends
end start