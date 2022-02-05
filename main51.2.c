#include <stdio.h>
#include <stdlib.h>

int matematikIslemi(){
		
	printf ("********************");
	printf ("\n");
	printf ("**      MENU      **");
	printf ("\n");
	printf ("********************");
	printf ("\n\n");
	printf ("1. Toplama Islemi\n");
	printf ("2. Carpma Islemi\n");
	printf ("3. Kare Bul\n");
	printf ("4. Kup Bul\n");
	printf ("5. Denklem (5x^2+4x+3)");
	printf ("\n\n");

	
	int sayi1,sayi2,sonuc,secim;
	
	printf ("Isleminiz: ");
	scanf ("%d",&secim);
	switch (secim) 
	{
		case 1: 
			printf ("Iki Sayi Girin: ");
			scanf ("%d%d",&sayi1,&sayi2);
			sonuc= sayi1 + sayi2;
			printf ("Toplamýn Sonucu: %d",sonuc);
		break;
		
		case 2:
			printf ("Iki sayi girin: ");
			scanf ("%d%d",&sayi1,&sayi2);
			sonuc= sayi1*sayi2;
			printf ("Carpimin Sonucu: %d",sonuc);
		break;
		
		case 3:
			printf ("Karesi Alinacak Sayiyi Girin: ");
			scanf ("%d",&sayi1);
			sonuc= sayi1*sayi1;
			printf ("Karenin Sonucu: %d",sonuc);
		break;
		
		case 4:
			printf ("Kupu Alinacak Sayiyi Girin: ");
			scanf ("%d",&sayi1);
			sonuc= sayi1*sayi1*sayi1;
			printf ("Kupun Sonucu: %d",sonuc);
		break;
		
		case 5:
			printf ("X Degerini Girin: ");
			scanf ("%d",&sayi1);
			sonuc= 5*sayi1*sayi1+4*sayi1+3;
			printf ("Denklemin Sonucu: %d",sonuc);
		break;
		
	}
	printf ("\n\n");
	return sonuc;
}

void sonucuKontrolEt(int sonuc){
	if(sonuc > 0){
		printf ("Sonuc pozitif");
	}else{
		printf ("Sonuc negatif");
	}
} 

int main() {
	int sonuc = matematikIslemi();
	
	sonucuKontrolEt(sonuc);
	
	return 0;
}
