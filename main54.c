#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *dosya;
	dosya=fopen("C:\\Users\\HP\\Desktop\\ödev.txt","w"); // Yazý içinde "\" kullanmak için "\\" kullanmak zorundayýz. Çünkü yazi icinde komut kullanmak istedigimiz zaman "\" bu sembolü kullanýrýz. Örnek:"\n". Bu sembolü komut sembolünden ayýrmak için. Çift slash kullanýrýz. {Orijinal dosya adresinde "\" vardýr.}             
	
	return 0;
}
