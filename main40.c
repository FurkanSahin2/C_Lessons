#include <stdio.h>
#include <stdlib.h>


int main() {
		
	// strcat iki veriyi birle�tirmeye yarayan komuttur.
	
	char kitapad[30],yazar[30],kitapyazar[60]; //kitapyazar de�i�keni => kitapad ve yazar de�i�kenlerinin bir�eltirilmi� halidir. 
	
	printf ("Kitap Adi ve Yazari Girin: ");
	scanf ("%s%s",kitapad,yazar);
	
	strcat(kitapyazar,kitapad);
	strcat(kitapyazar," <--> ");
	strcat(kitapyazar,yazar);
	printf ("\n\n");
	printf ("%s",kitapyazar);

	
	
	
	
	
	
	
	return 0;
}
