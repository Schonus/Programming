assume cs:code,ds:data,es:table,ss:stack
stack segment
    dw 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
stack ends
data segment
    db '1975','1976','1977','1978','1979','1980','1981','1982','1983'
    db '1984','1985','1986','1987','1988','1989','1990','1991','1992'
    db '1983','1994','1995';以上是表示21年的21个字符串

    dd 16,22,382,1356,2390,8000,16000,24486,50065,97479,140417,197514
    dd 345980,590827,803530,1183000,1843000,2759000,3753000,4649000,5937000

    dw 3,7,9,13,28,38,130,220,476,778,1001,1442,2258,2793,4037,5635,8226
    dw 11542,14430,15257,17800
data ends
table segment
    db 21 dup ('year summ ne ?? ')
table ends
code segment
start:  mov ax,data
        mov ds,ax
        mov ax,table
        mov es,ax
        mov ax,stack
        mov ss,ax
        mov dx,2
        mov cx,3
        mov si,0
        s:  push cx
            mov bp,0
            mov cx,15H
            s0: push cx
                mov cx,dx
                s00:mov ax,word ptr ds:[si]
                    mov word ptr es:[bp+di],ax
                    add si,2
                    add di,2
                loop s00
                add bp,10H
                mov di,0
                pop cx
            loop s0
            add di,5
            pop cx
            mov dx
        loop s
        mov ax,4C00H
        int 21H
code ends
end start