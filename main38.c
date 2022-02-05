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
	Bir kelime üstündeki verileri okumasý için "scanf" yerine aþaðýdaki kodlar kullanýlýr.
	gets(kelime);
	printf ("\n\n");
	puts(kelime);
	*/
	
	
	printf ("Katar Uzunlugu: %d",strlen(kelime)); //Katar: Dizinin içindeki veri
	
	
	return 0;
}
