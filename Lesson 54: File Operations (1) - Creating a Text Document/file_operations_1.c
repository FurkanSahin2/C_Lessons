#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *dosya;
	dosya=fopen("C:\\Users\\HP\\Desktop\\ödev.txt","w"); // Yazı içinde "\" kullanmak için "\\" kullanmak zorundayız. Çünkü yazi icinde komut kullanmak istedigimiz zaman "\" bu sembolü kullanırız. Örnek:"\n". Bu sembolü komut sembolünden ayırmak için. Çift slash kullanırız. {Orijinal dosya adresinde "\" vardır.}             
	
	return 0;
}
