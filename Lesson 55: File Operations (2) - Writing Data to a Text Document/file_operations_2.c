#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *dosya;
	dosya=fopen("C:\\Users\\HP\\Desktop\\bilgi.txt","w");
	
	// Char'ın içerisine yazdırılacak komutlar tek tırnak içerisine yazılır.
	
	putc('a',dosya); // Putc chardan geliyor puts ise stringden geliyor
	putc('\n',dosya);
	putc('b',dosya);
	
	fclose(dosya);
	
	//Ödev 1:
	
	FILE*dosya;
	dosya=fopen("C:\\Users\\HP\\Desktop\\ödev.txt","w");

	fputs("Furkan",dosya);
	putc('\n',dosya);
	fputs("Şahin",dosya);
	putc('\n',dosya);
	fputs("Yaş: 19",dosya);
	putc('\n',dosya);
	fputs("Anadolu Üniversitesi",dosya);


	return 0;
}
