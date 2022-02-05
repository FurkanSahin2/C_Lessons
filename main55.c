#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *dosya;
	dosya=fopen("C:\\Users\\HP\\Desktop\\bilgi.txt","w");
	
	// Char'ýn içerisine yazdýrýlacak komutlar tek týrnak içerisine yazýlýr.
	
	putc('a',dosya); // Putc chardan geliyor puts ise stringden geliyor
	putc('\n',dosya);
	putc('b',dosya);
	
	fclose(dosya);
	
	//Ödev 1:
	
	FILE*dosya;
	dosya=fopen("C:\\Users\\HP\\Desktop\\ödev.txt","w");

	fputs("Furkan",dosya);
	putc('\n',dosya);
	fputs("Þahin",dosya);
	putc('\n',dosya);
	fputs("Yaþ: 19",dosya);
	putc('\n',dosya);
	fputs("Anadolu Üniversitesi",dosya);
	
	return 0;
}
