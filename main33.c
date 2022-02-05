#include <stdio.h>
#include <stdlib.h>


int main() { 
	//double'ýn (için kullanýlan) klavyeden karþýlýðý ---> lf  
	//Bu derste bir sayýyý üste veya alta yuvarlamayý göreceðiz..
	
	double sayi,sonuc1,sonuc2;
	
	printf ("Degeri girin: ");
	scanf ("%lf",&sayi);
	
	sonuc1=  floor(sayi);
	printf ("Sonuc: %.f\n",sonuc1);
	
	sonuc2= ceil(sayi);
	printf ("Sonuc: %.f",sonuc2);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
