#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *belge;
	char karakter;
	belge= fopen("C:\\Users\\HP\\Desktop\\bilgi.txt","r");  
	

	do
	{
		karakter=getc(belge); // Tek karakteri getirdi ilk sýrada bulunaný
		
		printf ("%c",karakter);
	}
 	while (karakter!= EOF);	 // while'ýn sonuna noktalý virgül konur çünkü bu farklýysa iþlemi sonlandýrýyor, orada bitiriyor.
	
	fclose (belge);
	
	return 0;
}
