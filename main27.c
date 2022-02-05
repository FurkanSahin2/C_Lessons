#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
// Üç basamaklý rakamlarý birbirinden farklý kaç tane sayý olduðunu bulan programý C dili ile kodlayýnýz.
	
	int sayac=0;
	int i;
	int a,b,c;
		
	for (i=100;i<=999;i++)
	{
		a= i/100;
		b= (i/10)%10;
		c= i%10;
		if (a!=b && a!=c && b!=c)
		{
			sayac++;
		}		
		
	}
	printf ("%d",sayac);
	
	
	int sayi,i;
	
	printf ("Bir sayi giriniz: ");
	scanf ("%d",&sayi);
	
	for (i=1;i<=sayi;i++)
	{
		if (sayi%i==0)
		{
			printf("%d\n",i);
		}
	}
		
	
	
	int sayi,sonuc;
	
	printf ("Bir sayi girin: ");
	scanf ("%d",&sayi);

	sonuc= sayi*sayi*sayi;
	printf ("Sayinin kupu: %d",sonuc);
	
	//28. Ders Videosu

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
