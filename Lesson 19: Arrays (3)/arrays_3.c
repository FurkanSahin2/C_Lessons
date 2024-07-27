#include <stdio.h>
#include <stdlib.h>



int main() {
	/*
	char sehir[15];
	int i;
	
	for (i=0;i<3;i++)
	{
		printf ("Sehri Giriniz: ");
		scanf ("%s",sehir);
		printf ("Girdiginiz il: %s",sehir);
		printf ("\n");
	}
	
	//**************************

	char sehir[5][15];
	int i,j;
	
	for (i=0;i<5;i++)
	{
		printf ("Bir sehir giriniz: ");
		scanf ("%s",sehir[i]);
	}
	printf ("Girmis oldugunuz sehirler:\n");
	
	for (j=0;j<5;j++)
	{
		printf ("%s\n",sehir[j]);
	}
		
	//**************************
	
	int dizi[100];
	int i,sayi;
	
	printf ("Eleman Sayisi: ");
	scanf ("%d",&sayi);
	
	for (i=0;i<sayi;i++)
	{
		printf ("Dizinin %d. degerini girin: ",i+1);
		scanf ("%d",&dizi[i]);
	}
	printf ("\n\n");
	
	for (i=0;i<sayi;i++)
	{
		printf ("%d ",dizi[i]);
	}
	
	int dizi[100];
	int toplam,i,sayi,ortalama;
	
	printf ("Eleman Sayisi: ");
	scanf ("%d",&sayi);
	
	for (i=0;i<sayi;i++)
	{
		printf ("Dizinin %d. degerini girin: ",i+1);
		scanf ("%d",&dizi[i]);
	}
	printf ("\n\n");
	
    for (i=0;i<sayi;i++)
	{
		toplam=toplam+dizi[i];
	} 
	ortalama=toplam/sayi;
	printf ("Toplam: %d\n",toplam);
	printf ("Ortalama: %d",ortalama);
	*/

  
	// Örnek:
  
	char sehirler[5][15];
	int i,j=0;
	
	for(i=0;i<5;i++)
	{
		printf ("Bir sehir giriniz: ");
		scanf ("%s",sehirler[i]);
	}
	printf ("Girmis Oldugunuz Sehirler:\n");
	
	while (j<5)
	{
		printf ("%s\n",sehirler[j]);
		j++;
	}
	
	
	
	return 0;
}
