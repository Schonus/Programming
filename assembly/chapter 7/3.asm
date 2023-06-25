assume cs:code,ds:data,ss:stack

stack segment
    db 0,0,0,0,0,0,0,0
stack ends

data segment
    db 'ibm.............'
    db 'dec.............'
    db 'dos.............'
    db 'vas.............'
data ends

code segment
start:  mov ax,data
        mov ds,ax
        mov ax,stack
        mov ss,ax
        mov sp,10H
        mov bx,0
        mov cx,4

    s0: push cx
        mov si,0
        mov cx,3

    s:  mov al,[bx+si]
        and al,11011111b
        mov [bx+si],al
        inc si

        loop s
        add bx,16
        pop cx

        loop s0
        mov ax,4C00H
        int 21h
code ends

end start