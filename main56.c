#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *belge;
	char karakter;
	belge= fopen("C:\\Users\\HP\\Desktop\\bilgi.txt","r");  
	

	do
	{
		karakter=getc(belge); // Tek karakteri getirdi ilk s�rada bulunan�
		
		printf ("%c",karakter);
	}
 	while (karakter!= EOF);	 // while'�n sonuna noktal� virg�l konur ��nk� bu farkl�ysa i�lemi sonland�r�yor, orada bitiriyor.
	
	fclose (belge);
	
	return 0;
}
