#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	printf ("Katar Uzunlugu: %d",strlen("Merhaba"));
	*/
	
	char kelime[100];
	
	printf ("Kelimeyi girin: ");
	scanf ("%s",kelime);
	
	
	/* 
	Bir kelime �st�ndeki verileri okumas� i�in "scanf" yerine a�a��daki kodlar kullan�l�r.
	gets(kelime);
	printf ("\n\n");
	puts(kelime);
	*/
	
	
	printf ("Katar Uzunlugu: %d",strlen(kelime)); //Katar: Dizinin i�indeki veri
	
	
	return 0;
}
