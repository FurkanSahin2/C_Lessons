#include <stdio.h>
#include <stdlib.h>

int main() {
	/*
	int sayi= 5;
	
	if (sayi==5)
	{
		printf ("Girilen deger dogru");
	}
	
	else
	{
		printf ("Girilen deger yanlis");
	}
	
    
    
    int sayi1, sayi2, toplam;
    sayi1=26;
    sayi2=34;
	toplam= sayi1+sayi2;
	
	if (toplam>=50)
	
	{
		printf ("Toplam degeriniz: %d. Yani; Deger 50 veya 50 den buyuk", toplam);
	}
	
	else
	{
		printf ("Toplam degeriniz: %d. Yani; Deger 50 den kucuk",toplam);
	}
	
	
	int sinav1, sinav2, sinav3, ortalama;
	sinav1= 19;
	sinav2= 28;
	sinav3= 36;
	
	ortalama= (sinav1+sinav2+sinav3)/3;
	
	if (ortalama>=50)
	{
		printf ("Gecti");
	}
	
	else
	{
		printf ("Kaldi");
	}
	
    
    
    printf ("Ogrenci Ortalama Hesaplama Bilgi Sistemi\n\n");
    
    float s1,s2,s3,ort;
    
    printf ("Birinci Sinav Notunuzu Giriniz: ");
    scanf ("%f",&s1);
    
    printf ("Ikinci Sinav Notunuzu Giriniz: ");
    scanf ("%f",&s2);
    
    printf ("Ucuncu Sinav Notunuzu Giriniz: ");
    scanf ("%f",&s3);
    
    ort= (s1+s2+s3)/3;
    printf ("Ortalamaniz: %f\n\n",ort);
    
    if (ort>=50)
    {
    	printf ("Tebrikler Gectiniz :)");
	}
    
    else
    {
    	printf ("Maalesef Kaldiniz :(");
	}
	
	*/
	
	int s1,s2,s3,ort;
	
	printf ("Birinci Sinavi Giriniz: ");
	scanf ("%d",&s1);
	
	printf ("Ikinci Sinavi Giriniz: ");
	scanf ("%d",&s2);
	
	printf ("Ucuncu Sinavi Giriniz: ");
	scanf ("%d",&s3);
	
	ort=(s1+s2+s3)/3;
	
	if (ort>=45)
	{
		printf ("Tebrikler, dersinizden gectiniz.");
	}
	else
	{
		printf ("Maalesef dersinizden kaldiniz.");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
