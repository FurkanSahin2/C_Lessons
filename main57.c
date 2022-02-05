#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *belge;
	char karakter[50];
	
	belge= fopen("C:\\Users\\HP\\Desktop\\bilgi.txt","r");
	
	fgets(karakter,5,belge);  // Fgets'in prototipi / syntax'ý 3 parametreden oluþuyor. 1- (Yazýlanlarý atayacaðýnýz) deðiþken ismi. 2- Kaç karakter alacaksýnýz?. 3- Bunun dosya yolu nerede?                  
	puts (karakter);
	fclose(belge);
	
	return 0;
}
