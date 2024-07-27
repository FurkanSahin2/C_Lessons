#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	int el,normal,eltutar,normaltutar,toplam;
	
	printf ("El Bagaj kg: ");
	scanf ("%d",&el);
	
	printf ("Normal Bagaj kg: ");
	scanf ("%d",&normal);
	
	if (el<=8)
	{
		eltutar=0;
		}	
	else
	{
		eltutar= (el-8)*4;
	}
	
	if (normal<=15)
	{
		normaltutar=0;
	}
	else
	{
		normaltutar= (normal-15)*5;
	}
	
	toplam= eltutar + normaltutar;
	printf ("Toplam Extra Odemeniz: %d TL. Iyi yolculuklar...",toplam);
	
	
	
	int i,buyuk,kucuk,sayi1,sayi2,toplam=0;
	
	yeniden:
	
	printf ("1. Sayiyi Girin: ");
	scanf ("%d",&sayi1);
	
	printf ("2. Sayiyi Girin: ");
	scanf ("%d",&sayi2);
	
	if (sayi1==sayi2)
	{
		goto yeniden;
	}
	
	if (sayi1>sayi2)
	{
		buyuk= sayi1;
		kucuk= sayi2;
	}
	else 
	{
		buyuk= sayi2;
		kucuk=sayi1;
	}
	
	for (i=kucuk;i<=buyuk;i++)
	{
		toplam= toplam + i;
	}
	printf ("Toplam: %d",toplam);
	
	
	int yaz,kis,ilkba,sonba,toplam;
	kis=320;
	ilkba=kis/4;
	yaz=ilkba*8;
	sonba=yaz/10;
	
	toplam= yaz + kis + sonba + ilkba;
	printf ("Toplam ziyaretci sayisi: %d",toplam);

	*/
	
	int birler,onlar,yuzler,toplam,sayi;
	
	printf ("Bir sayi girin: ");
	scanf ("%d",&sayi);
	
	birler= sayi%10;
	onlar= (sayi/10)%10;
	yuzler= sayi/100;
	
	toplam= birler + onlar + yuzler;
	printf ("Toplam: %d",toplam);

	 
	return 0;
}
