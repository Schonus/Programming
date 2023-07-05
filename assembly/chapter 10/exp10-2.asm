assume cs:code,ss:stack
stack segment
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
stack ends
code segment
start:  
        mov ax,stack
        mov ss,ax
        mov sp,10H
        mov ax,4240H
        mov dx,000FH
        mov cx,0AH
        call divdw
        mov ax,4c00H
        int 21h
divdw:  push ax
        mov ax,dx
        mov dx,0
        div cx
        mov bx,ax
        pop ax
        div cx
        mov cx,dx
        mov dx,bx
        ret

code ends
end start