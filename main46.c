#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayi=20;
	int *s=&sayi; // E�er bir de�i�kenin �n�nde "*" sembol� varsa bu onun bir g�sterici oldu�unu ve bellek adresi tutaca��n� programa bildirdi�ini g�sterir.
	
	// Say� Ekrana Yazd�rma
	printf ("Deger: %d\n",sayi);
	
	// Adresi Ekrana Yazd�rma
	printf ("Adres: %x\n",s);
	
	char harf='a';
	char *h=&harf; // *h isimli de�i�ken �uan bir g�sterici ve ona harften gelen adresi at�yoruz.
	
	printf ("\n\n-------------\n\n");
	
	// Harfi Ekrana Yazd�rma
	printf ("Harf: %c\n",harf);
	
	// Adresi Ekrana Yazd�rma
	printf ("Adres: %x",h);
	
	return 0;
}
