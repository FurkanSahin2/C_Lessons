#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *belge;
	char karakter[50];
	
	belge= fopen("C:\\Users\\HP\\Desktop\\bilgi.txt","r");
	
	fgets(karakter,5,belge);  // Fgets'in prototipi / syntax'� 3 parametreden olu�uyor. 1- (Yaz�lanlar� atayaca��n�z) de�i�ken ismi. 2- Ka� karakter alacaks�n�z?. 3- Bunun dosya yolu nerede?                  
	puts (karakter);
	fclose(belge);
	
	return 0;
}
