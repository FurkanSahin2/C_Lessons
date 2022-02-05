#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	// fabs (float Absolute) = mutlak deðer 
	double sayi,sonuc,sonuc2;
	
	printf ("Sayiyi Girin: ");
	scanf ("%lf",&sayi);
	
	sonuc=fabs(sayi);
	printf ("Sonuc: %.lf\n",sonuc);
	
	sonuc2=log(sayi);
	printf ("Sonuc Logaritma: %.7lf",sonuc2);
	
	
	
	
	  
	return 0;
}
