#include <stdio.h>
#include <stdlib.h>
	/*
    // Soru 1: Klavyeden girilen sayinin küpünü bulun!
	
	// Cevap 1:
	
	int kupbul(int sayi)
	{
		int sonuc= sayi*sayi*sayi;
		return sonuc;
	}
	
	
	// Soru 2: Girmiş olduğumuz en ve boy bilgileriyle bir dikdörtgen yapın!
	
	// Cevap 2:
	
	// Aritmatik işlem yapıp geriye sonuç döndürmeyeceği için fonksiyonumuzun adını "void" koyuyoruz..
	
	void dortgen (int kisa, int uzun) //Fonksiyon içerisindeki parametretlerinin (burada "int uzun, int kisa") değişkenlerinin her birini ayrı ayrı belirtmemiz gerekir. Tek parametre de (örn; "int kisa,uzun) dersek hata verir.
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
	
	// Ödev 1: Klavyeden girilen en ve boy bilgileriyle için boş bir dikddrtgen oluşturun!
	
	// Cevap Ödev:
	
	
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
	// Cevap 1 Devamı: 
	
	int s;
	
	printf ("Sayiyi Girin: ");
	scanf ("%d",&s);
	printf ("\n\nSonuc: %d",kupbul(s));
	
	
	// Cevap 2 Devamı:
	
	dortgen(7,20);
	*/
	
	// Cevap 3 Devamı:
	
	int sayien,sayiboy;
	printf("En Giriniz: ");
	scanf("%d",& sayien);
	printf("Boy Giriniz: ");
    scanf("%d",& sayiboy);
    printf ("\n\n");
    
    dortgen(sayien,sayiboy);
	
	return 0;
}
