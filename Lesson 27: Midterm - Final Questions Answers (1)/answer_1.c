#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
// Üç basamaklı rakamları birbirinden farklı kaç tane sayı olduğunu bulan programı C dili ile kodlayınız.
	
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
	*/	
	
	
	int sayi,sonuc;
	
	printf ("Bir sayi girin: ");
	scanf ("%d",&sayi);

	sonuc= sayi*sayi*sayi;
	printf ("Sayinin kupu: %d",sonuc);
	
	
	return 0;
}
	
	
