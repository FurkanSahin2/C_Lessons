#include <stdio.h>
#include <stdlib.h>


int main() { 
	//double'�n (i�in kullan�lan) klavyeden kar��l��� ---> lf  
	//Bu derste bir say�y� �ste veya alta yuvarlamay� g�rece�iz..
	
	double sayi,sonuc1,sonuc2;
	
	printf ("Degeri girin: ");
	scanf ("%lf",&sayi);
	
	sonuc1=  floor(sayi);
	printf ("Sonuc: %.f\n",sonuc1);
	
	sonuc2= ceil(sayi);
	printf ("Sonuc: %.f",sonuc2);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
