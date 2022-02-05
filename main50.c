#include <stdio.h>
#include <stdlib.h>
	/*
    // Soru 1: Klavyeden girilen sayinin k�p�n� bulun!
	
	// Cevap 1:
	
	int kupbul(int sayi)
	{
		int sonuc= sayi*sayi*sayi;
		return sonuc;
	}
	
	
	// Soru 2: Girmi� oldu�umuz en ve boy bilgileriyle bir dikd�rtgen yap�n!
	
	// Cevap 2:
	
	// Aritmatik i�lem yap�p geriye sonu� d�nd�rmeyece�i i�in fonksiyonumuzun ad�n� "void" koyuyoruz..
	
	void dortgen (int kisa, int uzun) //Fonksiyon i�erisindeki parametretlerinin (burada "int uzun, int kisa") de�i�kenlerinin her birini ayr� ayr� belirtmemiz gerekir. Tek parametre de (�rn; "int kisa,uzun) dersek hata verir.
	{
		int i,j;
		for (i=0;i<uzun;i++)
		{
			for(j=0;j<kisa;j++)
			{
				printf ("*");
			}
			printf ("\n");
		}
	}
	*/
	
	// �dev 1: Klavyeden girilen en ve boy bilgileriyle i�in bo� bir dikd�rtgen olu�turun!
	
	// Cevap �dev:
	
	
	void dortgen(int en,int boy)
	{   int i,j;
		for(i=1;i<=boy;i++)
		{
			for(j=1;j<=en;j++)
			{
				if(i==1||i==boy||j==1||j==en)
				{printf("*");
			}
				else
				{printf(" ");
				}
			}
			printf("\n");
		}
	}
		
int main() {
	/*
	// Cevap 1 Devam�: 
	
	int s;
	
	printf ("Sayiyi Girin: ");
	scanf ("%d",&s);
	printf ("\n\nSonuc: %d",kupbul(s));
	
	
	// Cevap 2 Devam�:
	
	dortgen(7,20);
	*/
	
	// Cevap 3 Devam�:
	
	int sayien,sayiboy;
	printf("En Giriniz: ");
	scanf("%d",& sayien);
	printf("Boy Giriniz: ");
    scanf("%d",& sayiboy);
    printf ("\n\n");
    
    dortgen(sayien,sayiboy);
	
	return 0;
}
