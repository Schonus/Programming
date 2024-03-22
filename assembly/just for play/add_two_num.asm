assume cs:code ds:data ss:stack
data segment
    buffer dw 2 DUP('$')
data ends

code segment
start:  mov ax, data
        mov ds, ax
        
code ends
end start