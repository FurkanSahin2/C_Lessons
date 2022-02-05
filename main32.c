#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int x,y,sonuc;
	
	printf ("Sayiyi girin: ");
	scanf ("%d",&x);
	
	printf ("Ustu girin: ");
	scanf ("%d",&y);
	
	sonuc=pow (x,y);
	printf ("Sonuc: %d",sonuc);
	
	
	return 0;
}
