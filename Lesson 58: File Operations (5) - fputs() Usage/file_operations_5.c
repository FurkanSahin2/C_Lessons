#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *metinbelgesi;
	char veri[20]= "Bilgisayar ";
	char veri2[20]= "Muhendisligi ";
	char veri3[20]= "Bolumu :D";
	
	metinbelgesi= fopen("C:\\Users\\HP\\Desktop\\bilgi.txt","w");      
	
	fputs (veri,metinbelgesi); // Fputs'un prototipi / syntax'ı 2 parametreden oluşuyor. 1- (Yazılanları atayacağınız) değişken ismi. 2- Bunun dosya yolu nerede?                  
	
	fputs (veri2,metinbelgesi);
	
	fputs (veri3,metinbelgesi);
	
	fclose(metinbelgesi);
	
	return 0;
}
