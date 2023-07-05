assume cs:code,ds:data,ss:stack
stack segment
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
stack ends
data segment
    dw 123,12666,1,8,3,38
data ends
code segment    
start:  mov dh,8
        mov dl,3
        mov cl,2
        mov ax,data
        mov ds,ax
        mov ax,stack
        mov ss,ax
        mov sp,40H
        mov ax,0B800H
        mov es,ax
        call clear
        call show_str
        mov ax,4c00H
        int 21h

show_str:  
        push ax
        push es
        push si
        push bp
        push bx
        push cx
        push dx
        mov di,0
        mov al,dl
        mov ah,0
        mov si,ax
        add si,si
        mov al,dh
        mov bp,ax
        mov bx,00A0H
        mul bx
        mov bp,ax
        mov bx,cx
        mov cx,6
        s:  push cx
            add si,10
            mov byte ptr es:[bp+si-1],bl
            mov byte ptr es:[bp+si-3],bl
            mov byte ptr es:[bp+si-5],bl
            mov byte ptr es:[bp+si-7],bl
            mov byte ptr es:[bp+si-9],bl
            mov ax,word ptr ds:[di]
            push bx
            mov bl,10
            mov cx,5
            s0: 
                sub si,2
                div bx
                add dx,30H
                mov byte ptr es:[bp+si],dl
                sub dx,dx
            loop s0
            pop bx
            add si,00A0H
            add di,2
            pop cx
        loop s
        pop dx
        pop cx
        pop bx
        pop bp
        pop si
        pop es
        pop ax
        ret
clear:  push cx
        push si
        mov cx,4000
        s1: mov word ptr es:[si],0
            add si,2
        loop s1
        pop si
        pop cx
        ret
            

code ends
end start