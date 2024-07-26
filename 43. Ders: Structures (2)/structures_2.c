#include <stdio.h>
#include <stdlib.h>

	struct kayit
	{
		char ad[20];
		int numara;
		int sinif;
		float ortalama;
	};
	
	struct kayit ogr;


int main() {
	
	printf ("Ad Soyad: ");
	scanf ("%s",&ogr.ad);
	
	printf ("Numara: ");
	scanf ("%d",&ogr.numara);
	
	printf ("Sinif: ");
	scanf ("%d",&ogr.sinif);
	
	printf ("Ortalama: ");
	scanf ("%f",&ogr.ortalama);
	
	printf ("%s\n",ogr.ad);
	
	printf ("%d\n",ogr.numara);
	
	printf ("%d\n",ogr.sinif);
	
	printf ("%f",ogr.ortalama);
	
	
	return 0;
}
