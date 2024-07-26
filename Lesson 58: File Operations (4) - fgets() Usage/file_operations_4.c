#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *belge;
	char karakter[50];
	
	belge= fopen("C:\\Users\\HP\\Desktop\\bilgi.txt","r");
	
	fgets(karakter,5,belge);  // Fgets'in prototipi / syntax'ı 3 parametreden oluşuyor. 1- (Yazılanları atayacağınız) değişken ismi. 2- Kaç karakter alacaksınız?. 3- Bunun dosya yolu nerede?                  
	puts (karakter);
	fclose(belge);
	
	return 0;
}
