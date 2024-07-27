#include <stdio.h>
#include <stdlib.h>



int main() {

	/*

	float sayi1,sayi2,toplam;
	
	printf ("Ilk sayiyi giriniz: ");
	scanf ("%f",&sayi1);
	
	printf ("Ikinci sayiyi giriniz: ");
	scanf ("%f",&sayi2);
	
	toplam= sayi1+sayi2;
	printf ("Girmis Oldugunuz Sayi: %f",toplam);
	
	
	float a,b,c;
	printf ("Birinci sayiyi giriniz: ");
	scanf ("%f",&a);
	printf ("Ikinci sayiyi giriniz: ");
	scanf ("%f",&b);
	
	c=a/b;
	printf ("Sonuc: %f",c);
	
	float sinav1, sinav2, sinav3,ortalama;
	printf ("Birinci Sinav Notunu Giriniz: ");
	scanf ("%f",&sinav1);
	printf ("Ikinci Sinav Notunu Giriniz: ");
	scanf ("%f",&sinav2);
	printf ("Ucuncu Sinav Notunuzu Giriniz: ");
	scanf ("%f",&sinav3);
	
	ortalama=(sinav1+sinav2+sinav3)/3;
	printf ("Ortalamaniz: %f",ortalama);
	
    
    //Aylık maaşı 2500 olan birisinin maaşına %12 zam yapılırsa yeni maaşı ne kadar olur
    printf ("***Zam Maasi Hesaplama***\n\n");
    float maas, yeni_maas;
    printf ("Eski maasinizi giriniz: ");
    scanf ("%f",&maas);
    
    yeni_maas=maas+maas*12/100;
    printf ("Maasiniz: %f",yeni_maas);
    
    
    //Çemberde alan= pi* r * r
    //Çemberde çevre= 2 * pi * r
    
    printf ("***Cemberin Alan ve Cevre Hesaplamasi***\n\n");
    
    float yaricap,pi,alan,cevre;
    pi=3.14;
    printf ("Yaricap Deger: ");
    scanf ("%f",&yaricap);
    
    alan=pi*yaricap*yaricap;
    cevre=2*pi*yaricap;
    
    printf ("Alan: %f\n",alan);
    printf ("Cevre: %f",cevre);
    
    
    // Ygs 1 puan hesaplama
    //Türkçe:1.999
    //Matematik: 3.998
    //Sosyal Bilgiler: 1
    //Fen Bilgisi:2.999
    //Taban Puanı: 100.160
    
    float Turkce,Matematik,Sosyal,Fen,Taban,Toplam_puan;
    Taban=100.160;
    printf ("Turkce Netiniz: ");
    scanf ("%f",&Turkce);
    
    printf("Matematik Netiniz: ");
    scanf ("%f",&Matematik);
    
    printf ("Sosyal Bilgiler Netiniz: ");
    scanf ("%f",&Sosyal);
    
    printf ("Fen Bilgiler Netiniz: ");
    scanf ("%f",&Fen);
    
    Toplam_puan=Turkce*1.999+Matematik*3.998+Sosyal*1+Fen*2.999+Taban;
    printf ("YGS - 1 Puan Turununde Sonucunuz: %f",Toplam_puan);
  
    */
    
    //Aylık maaşı 2500 olan birisinin maaşına belirli bir zam yapılırsa yeni maaşı ne kadar olur?
  
    float maas, zamoran, yenimaas;
    printf("Mevcut Maasinizi Giriniz: ");
    scanf ("%f",&maas);
    
    printf ("Yapilacak Zam Oranini Giriniz: ");
    scanf ("%f",&zamoran);
    
    yenimaas=maas+maas*zamoran/100;
    printf ("Yeni Maasiniz: %f",yenimaas);

    


	return 0;
}
