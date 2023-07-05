assume cs:code,ds:data,ss:stack
stack segment
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    db 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
stack ends
data segment
    db 'welcome to masm!',0
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
        mov dx,cx
        s:  
            mov byte ptr es:[bp+si+1],dl
            mov cl,byte ptr ds:[di]
            mov byte ptr es:[bp+si],cl
            add si,2
            add di,1
            add cx,1
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