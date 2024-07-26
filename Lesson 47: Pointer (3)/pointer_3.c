#include <stdio.h>
#include <stdlib.h>


int main() {
	// Burada gireceğimiz kodlarla bellekte kendinden önce ve sonraki adreslere ulaşacağız.

	
	
	int harf=2;
	char *pt=&harf;
	
	printf ("Adres: %x\n",pt); // "62fe17"
	
	pt++;
	
	printf ("Adres2: %x\n",pt); // "62fe18"
	
	pt--;
	
	printf ("Adres3: %x\n",pt); // pt göstericisinin son aldığı değer "62fe18" olduğu için bu adresten bir eksiltme yaptı ve "62fe17" adresini ekrana yazdırdı.
	
	pt+=5;
	
	printf ("Adres4: %x",pt); // "62fe1c" 
	
	
	
	return 0;
}
