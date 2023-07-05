assume cs:code,ds:data,ss:stack
stack segment
    db 16 dup (0)
stack ends
data segment
    dw 1,2,3,4,5,6,7,8
    dd 0,0,0,0,0,0,0,0
data ends
code segment
start:  mov ax,data
        mov ds,ax
        add ax,10H
        mov es,ax
        add ax,stack
        mov ss,ax
        mov sp,10H
        mov di,0
        mov si,0
        mov cx,8
        call s
        mov ax,4c00H
        int 21h
        s:  
            l:  mov ax,word ptr ds:[di]
                mov bx,ax
                mul bx
                mul bx
                mov word ptr es:[si],ax 
                add di,2
                add si,4
            loop l
            ret
code ends
end start