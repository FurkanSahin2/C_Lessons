#include <stdio.h>
#include <stdlib.h>


int main() {
	// Burada gireceðimiz kodlarla bellekte kendinden önce ve sonraki adreslere ulaþacaðýz.

	
	
	int harf=2;
	char *pt=&harf;
	
	printf ("Adres: %x\n",pt); // "62fe17"
	
	pt++;
	
	printf ("Adres2: %x\n",pt); // "62fe18"
	
	pt--;
	
	printf ("Adres3: %x\n",pt); // pt göstericisinin son aldýðý deðer "62fe18" olduðu için bu adresten bir eksiltme yaptý ve "62fe17" adresini ekrana yazdýrdý.
	
	pt+=5;
	
	printf ("Adres4: %x",pt); // "62fe1c" 
	
	
	
	return 0;
}
