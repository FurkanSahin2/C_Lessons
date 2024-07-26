#include <stdio.h>
#include <stdlib.h>


int main() {
		
	// strcat, iki veriyi birleştirmeye yarayan komuttur.
	
	char kitapad[30],yazar[30],kitapyazar[60]; //kitapyazar değişkeni => kitapad ve yazar değişkenlerinin birleştirilmiş halidir. 
	
	printf ("Kitap Adi ve Yazari Girin: ");
	scanf ("%s%s",kitapad,yazar);
	
	strcat(kitapyazar,kitapad);
	strcat(kitapyazar," <--> ");
	strcat(kitapyazar,yazar);
	printf ("\n\n");
	printf ("%s",kitapyazar);


	return 0;
}
