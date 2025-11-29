// Copyright(c) 2025 DiabloBlanco
// Vvix(WIX) project, V3.1
#include "screen.h"
//#include "kernel.h" // maybe in further versions
void kmain() {
	clears();
	setcolor(0x0A); // Kolor for kernel logs
	putstr("Copyright(c) 2025 DiabloBlanco\n");
	putstr("Vvix(WIX) kernel V3\n");
	setcolor(0x07);
	putstr("If you see this message, piece of crap named Vvix works :D \n");
	putstr("If you kinda enjoy this piece of crap and want to create an OS with it, you should visit Vvix baseutils repo("); 
	setcolor(0x0E);
	putstr("github.com/diabloblanko/baseutils");
	setcolor(0x07);
	putstr(")\n");}
