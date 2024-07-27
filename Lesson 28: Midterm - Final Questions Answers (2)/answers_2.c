#include <stdio.h>
#include <stdlib.h>


int main() { 
	/*
	int sayi=1;
	int i;
	for (i=1;i<=24;i++)
	{
		sayi= sayi*2;
	}
	
	printf ("%d",sayi);
	
	int sayi,i;
	int toplam=0;
	for (i=1;i<=4;i++)
	{
		printf ("%d.Sayi: ",i);
		scanf ("%d",&sayi);
		toplam= toplam + sayi;
	}
	printf ("Toplam Sonuc: %d",toplam);
	

	int sayi;
	int toplam=0;
	
	
	while (sayi!=0)
	
	{
		printf ("Sayi girin: ");
		scanf ("%d",&sayi);
		toplam=toplam+sayi;
	}	
	
	printf ("Sonuc: %d",toplam);
	*/
	
	int saat;
	
	printf ("Kac saat otoparkta kaldiniz: ");
	scanf ("%d",&saat);
	
	if (saat>0 && saat<=4)
	{
		printf ("10 TL odeme yapiniz");
	}
	if (saat>4 && saat<=8)
	{
		printf ("12 TL odeme yapiniz");
	}
	if (saat>8 && saat<=12)
	{
		printf ("15 TL odeme yapiniz");
	}
	if (saat>12)
	{
		printf ("20 TL odeme yapiniz");
	}
	
	
	return 0;
}
