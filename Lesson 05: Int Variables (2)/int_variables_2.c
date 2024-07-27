#include <stdio.h>
#include <stdlib.h>

// Entering Data from the Keyboard

int main() {
  
  /*	
  
	int sayi;
	printf ("Girmis Oldugunuz Sayi: ");
	scanf ("%d",&sayi);
	printf ("Girmis Oldugunuz Sayi: %d",sayi);
	
	
	int sayi1,sayi2,toplam,fark,carpim,bolum;
	printf ("Birinci Sayiyi Giriniz: ");
	scanf ("%d",&sayi1);
	
	
	printf ("Ikinci Sayiyi Giriniz: ");
	scanf ("%d",&sayi2);
	
	toplam= sayi1+sayi2;
	printf ("Toplam: %d\n",toplam);
	
	fark= sayi1-sayi2;
	printf ("Fark: %d\n",fark);
	
	carpim= sayi1*sayi2;
	printf ("Carpim: %d\n",carpim);
	
	bolum= sayi1/sayi2;
	printf ("Bolum: %d",bolum);
	
	
	int kenar, alan, cevre;
	
	printf ("Karenin Alan ve Cevre Hesabi\n\n");
	
	printf ("Karenin bir kenarini giriniz: ");
	scanf ("%d",&kenar);
	
	alan= kenar*kenar;
  cevre=kenar*4;
    
  printf ("Karenin Alani: %d\n", alan);
  printf ("Karenin Cevresi: %d", cevre);

	
	int s1, s2, s3, ortalama;
	
	printf ("Birinci Sinav: ");
	scanf ("%d",&s1);
	
	printf ("Ikinci Sinav: ");
	scanf ("%d",&s2);
	
	printf ("Ucuncu Sinav: ");
	scanf ("%d",&s3);
	
	ortalama=(s1+s2+s3)/3;
	printf ("Ortalamaniz: %d",ortalama);
    
	
	int misir,kola,su,bilet,toplam;
	
	printf ("Kac misir alirsiniz?: ");
	scanf ("%d",&misir);
	
	printf ("Kac kola alirsiniz?: ");
	scanf ("%d",&kola);
	
	printf ("Kac su alirsiniz?: ");
	scanf ("%d",&su);
	
	printf ("Kac bilet alirsiniz?: ");
	scanf ("%d",&bilet);
		
	toplam=misir*3+kola*2+su*1+bilet*9;
	printf ("Toplam Borcunuz: %d TL",toplam);
 
  */
	
  int misir, su, kola, bilet, toplam;
  printf ("Kac adet misir istersiniz?: ");
	scanf ("%d",&misir);
	
	printf ("Kac adet su istersiniz?: ");
	scanf ( "%d",&su);
	
	printf ("Kac adet kola istersiniz?: ");
	scanf ("%d",&kola);
	
	printf ("Kac adet bilet istersiniz?: ");
	scanf ("%d",&bilet);
	
	toplam=(misir*3)+(su*2)+(kola*4)+(bilet*10);
	printf ("Toplam odeyeceginiz tutar: %d",toplam);
	
	
	
	return 0;
}
