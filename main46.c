#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayi=20;
	int *s=&sayi; // Eðer bir deðiþkenin önünde "*" sembolü varsa bu onun bir gösterici olduðunu ve bellek adresi tutacaðýný programa bildirdiðini gösterir.
	
	// Sayý Ekrana Yazdýrma
	printf ("Deger: %d\n",sayi);
	
	// Adresi Ekrana Yazdýrma
	printf ("Adres: %x\n",s);
	
	char harf='a';
	char *h=&harf; // *h isimli deðiþken þuan bir gösterici ve ona harften gelen adresi atýyoruz.
	
	printf ("\n\n-------------\n\n");
	
	// Harfi Ekrana Yazdýrma
	printf ("Harf: %c\n",harf);
	
	// Adresi Ekrana Yazdýrma
	printf ("Adres: %x",h);
	
	return 0;
}
