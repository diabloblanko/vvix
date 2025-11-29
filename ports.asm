; Copyright(c) 2025 DiabloBlanco
; Vvix project. Besides it hasnt been edited since very first release of kernel, it still works and its still very important.
global outb
outb:
	mov dx, [esp + 4]
	mov al, [esp + 8]
	out dx, al
	ret
