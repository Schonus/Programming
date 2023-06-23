assume cs:code,ds:data
data segment
    db 'MySQL'
    db '..........'
data ends

code segment
start:  
        mov ax,data
        mov ds,ax
        mov si,0
        mov di,5
        
        mov cx,5
    s:  mov al,[si]
        mov [di],al
        inc si
        inc di
        loop s

        mov ax,4C00H
        int 21H
code ends
end start