#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *belge;
	char karakter;
	belge= fopen("C:\\Users\\HP\\Desktop\\bilgi.txt","r");  
	

	do
	{
		karakter=getc(belge); // Tek karakteri getirdi ilk sırada bulunanı
		
		printf ("%c",karakter);
	}
 	while (karakter!= EOF);	 // while'ın sonuna noktalı virgül konur çünkü bu farklıysa işlemi sonlandırıyor, orada bitiriyor.
	
	fclose (belge);
	
	return 0;
}
