#include <stdio.h>
#include <stdlib.h>



int main() {
  
	/*
 
    int sayi1;
    sayi1=8;
    
    if (sayi1%2==0)
    {
    	printf ("Sayi cifttir");
	}
	else
	{
		printf ("Sayi tektir");
	}
	
	
	//klavyeden girilen say� 3'e 5'e tam b�l�n�yorsa
	
	int x;
	printf ("X degerini giriniz: ");
	scanf ("%d",&x);
	
	if (x%3==0 && x%5==0)
	{
		printf ("Sayi 3'e ve 5'e tam bolunur");
	}
	else
	{
		printf ("Sayi 3'e ve 5'e tam bolunmez");
	}
	

    	
	int x;
	printf ("X degerini giriniz: ");
	scanf ("%d",&x);
	
	if (x%3==0 || x%5==0 || x%7==0)
	{
		printf ("Sayi 3'e veya 5'e veyahut 7'ye tam bolunur");
	}
	else
	{
		printf ("Sayi 3'e veya 5'e veyahut 7'ye tam bolunmez");
	}
	
	
	//Klavyeden girilen dereceye g�re suyun durumunu yazd�ran program� kodlay�n!
	
	printf ("*** Suyun Durumu ***\n\n");
	
	int su;
	
	printf ("Suyun Sicakligini Giriniz: ");
	scanf ("%d",&su);
	
	if (su<=0)
	{
		printf ("Su suanda buz halindedir.");
	}
	if (su>0 && su<100)
	{
		printf ("Su suanda sivi halindedir.");
	}
	if (su>=100)
	{
		printf ("Su suanda buhar halindedir.");
	}
	


     int s1,s2,s3,p,ort;
     
     printf ("Birinci Sinav Notunuzu Giriniz: ");
     scanf ("%d",&s1);
   
      
     printf ("Ikinci Sinav Notunuzu Giriniz: ");
     scanf ("%d",&s2);
	 
	  
     printf ("Ucuncu Sinav Notunuzu Giriniz: ");
     scanf ("%d",&s3); 
      
     printf ("Proje Notunuzu Giriniz: ");
     scanf ("%d",&p);
     
     ort= (s1+s2+s3+p)/4;
     printf ("Ortalamaniz: %d\n\n",ort);
	 
	 if (ort<50)
	 {
	 	printf ("FF");
		 }	
	
	if (ort>=50 && ort<60)
	{
		printf ("DD");
	}
	
	if (ort>=60 && ort<70)
	{
		printf ("CC");
	}
	
	if (ort>=70 && ort<80)
	{
		printf ("BB");
	}
	
	if (ort>=85)
	{
		printf ("AA");
	}
	
	
	int s1,s2,s3,proje,ort;
	
	printf ("Birinci Sinav Notunuzu Giriniz: ");
	scanf ("%d",&s1);
	
	printf ("Ikinci Sinav Notunuzu Giriniz: ");
	scanf ("%d",&s2);
	
	printf ("Ucuncu Sinav Notunuzu Giriniz: ");
	scanf ("%d",&s3);
	
	printf ("Proje Notunuzu Giriniz: ");
	scanf ("%d",&proje);
	
	ort=(s1+s2+s3+proje)/4;
	
	if (ort<=49)
	{
		printf ("FF");
	}
	if (ort>=50 && ort<=59)
	{
		printf ("DD");
	}
	if (ort>=60 && ort<=74)
	{
		printf ("CC");
	}
	if (ort>=75 && ort<=84)
	{
		printf ("BB");
	}
	if (ort>=85 && ort==100)
	{
		printf ("AA");
	}
 
	*/
  
	int s1,s2,s3,p,ort;
	
	printf ("Birinci Sinav Notunuzu Giriniz: ");
	scanf ("%d",&s1);
	
	printf ("Ikinci Sinav Notunuzu Giriniz: ");
	scanf ("%d",&s2);
	
	printf ("Uc�nc� Sinav Notunuzu Giriniz: ");
	scanf ("%d",&s3);
	
	printf ("Proje Notunuzu Giriniz: ");
	scanf ("%d",&p);
	
	ort=(s1+s2+s3+p)/4;
	
	if  (ort<=49)
	{
		printf ("FF");
    }
	
	if (ort>=50 && ort<=59)
	{
		printf ("DD");
	}
	
	if (ort>=60 && ort<=74)
	{
		printf ("CC");
	}
	
	if (ort>=75 && ort<=84)
	{
		printf ("BB");
	}
	
	if (ort>=85)
	{
		printf ("AA");
	}
	
	
	return 0;
}
