#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *dosya;
	dosya=fopen("C:\\Users\\HP\\Desktop\\bilgi.txt","w");
	
	// Char'�n i�erisine yazd�r�lacak komutlar tek t�rnak i�erisine yaz�l�r.
	
	putc('a',dosya); // Putc chardan geliyor puts ise stringden geliyor
	putc('\n',dosya);
	putc('b',dosya);
	
	fclose(dosya);
	
	//�dev 1:
	
	FILE*dosya;
	dosya=fopen("C:\\Users\\HP\\Desktop\\�dev.txt","w");

	fputs("Furkan",dosya);
	putc('\n',dosya);
	fputs("�ahin",dosya);
	putc('\n',dosya);
	fputs("Ya�: 19",dosya);
	putc('\n',dosya);
	fputs("Anadolu �niversitesi",dosya);
	
	return 0;
}
