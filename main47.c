#include <stdio.h>
#include <stdlib.h>


int main() {
	// Burada girece�imiz kodlarla bellekte kendinden �nce ve sonraki adreslere ula�aca��z.

	
	
	int harf=2;
	char *pt=&harf;
	
	printf ("Adres: %x\n",pt); // "62fe17"
	
	pt++;
	
	printf ("Adres2: %x\n",pt); // "62fe18"
	
	pt--;
	
	printf ("Adres3: %x\n",pt); // pt g�stericisinin son ald��� de�er "62fe18" oldu�u i�in bu adresten bir eksiltme yapt� ve "62fe17" adresini ekrana yazd�rd�.
	
	pt+=5;
	
	printf ("Adres4: %x",pt); // "62fe1c" 
	
	
	
	return 0;
}
