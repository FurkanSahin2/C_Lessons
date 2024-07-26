#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayi=20;
	int *s=&sayi; // Eğer bir değişkenin içinde "*" sembolü varsa bu onun bir gösterici olduğunu ve bellek adresi tutacağını programa bildirdiğini gösterir.
	
	// Sayı Ekrana Yazdırma
	printf ("Deger: %d\n",sayi);
	
	// Adresi Ekrana Yazdırma
	printf ("Adres: %x\n",s);
	
	char harf='a';
	char *h=&harf; // *h isimli değişken şuan bir gösterici ve ona harften gelen adresi atıyoruz.
	
	printf ("\n\n-------------\n\n");
	
	// Harfi Ekrana Yazdırma
	printf ("Harf: %c\n",harf);
	
	// Adresi Ekrana Yazdırma
	printf ("Adres: %x",h);
	
	return 0;
}
