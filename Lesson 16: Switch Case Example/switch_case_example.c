#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	int sayi1, sayi2, sonuc;
	char islem;
	
	printf ("Bir islem sembolu giriniz: ");
	scanf ("%s",&islem);
	
	printf ("Birinci sayiyi giriniz: ");
	scanf ("%d",&sayi1);
	
	printf ("Ikinci sayiyi giriniz: ");
	scanf ("%d",&sayi2);
	
	
	switch (islem)
	{
		case '+': sonuc= sayi1+sayi2; printf ("Sonuc: %d",sonuc); break;
		case '-': sonuc= sayi1-sayi2; printf ("Sonuc: %d",sonuc); break;
		case '*': sonuc= sayi1*sayi2; printf ("Sonuc: %d",sonuc); break;
		case '/': sonuc= sayi1/sayi2; printf ("Sonuc: %d",sonuc); break;
		default: printf ("Hatali islem sembolu girisi"); break;
	}
	*/
	
	int pi, sayi1, sayi2, sayi3, sayi4, sayi5, sayi6, sayi7, sayi8, sayi9, sayi10, sayi11, sayi12, sayi13, sayi14, kareninalani, karenincevresi, kareninhacmi, daireninalani, dairenincevresi, yaricap, yaricap2,  dikdortgeninalani, dikdortgeninhacmi, dikdortgenincevresi, i, faktoryel, kupunhacmi, kupunyuzeyalani, sonuc, secim;
	
	pi=3,14;
	faktoryel=1;
	
	printf ("Matematik Menusu\n");
	printf ("****************\n\n");
	printf ("1- Karede alan hesabi\n");
	printf ("2- Karede cevre hesabi\n");
	printf ("3- Karenin hacim hesabi\n");
	printf ("4- Dairede alan hesabi\n");
	printf ("5- Dairede cevre hesabi\n");
	printf ("6- Dikdortgende alan hesabi\n");
	printf ("7- Dikdortgende cevre hesabi\n");
	printf ("8- Dikdortgende hacim hesaplama\n");
	printf ("9- Faktoryel hesaplama\n");
	printf ("10- Kupte hacim hesaplama\n");
	printf ("11- Kupte yuzey alani hesaplama\n\n");
	printf ("Isleminizi secin [1-11]: ");
	scanf ("%d",&secim);
	
	switch (secim)
	{
		case 1: printf ("Karenin bir kenar uzunlugunu giriniz: ");
				scanf ("%d",&sayi1);
		        
		        kareninalani= sayi1*sayi1;
				printf ("Karenin Alani: %d",kareninalani); break;
		
		case 2: printf ("Karenin bir kenar uzunlugunu giriniz: ");
				scanf ("%d",&sayi2);
				
				karenincevresi= sayi2*4;
				printf ("Karenin Cevresi: %d",karenincevresi); break;
			
		case 3: printf ("Karenin bir kenar uzunlugunu giriniz: ");
    			scanf ("%d",&sayi3);
    			printf ("Kenar yuksekligini giriniz: ");
   				scanf ("%d",&sayi4);
   				
    			kareninhacmi= sayi3*sayi3*sayi4;
    			printf ("Karenin Hacmi: %d",kareninhacmi); break; 
		
		case 4: printf ("Dairenin yaricapini giriniz: ");
			    scanf ("%d",&yaricap);
			    
				daireninalani= pi*yaricap*yaricap;
    			printf ("Daire Alani: %d",daireninalani); break;
		
		case 5: printf ("Dairenin yaricapini giriniz: ");
    			scanf ("%d",&yaricap2);
    			
    			dairenincevresi=2*pi*yaricap2;
    			printf ("Dairenin Cevresi: %d",dairenincevresi); break;
			
		case 6: printf ("Dikdortgenin uzun kenarini giriniz: ");
				scanf ("%d",&sayi5);
				printf ("Dikdortgenin kisa kenarini giriniz: ");
				scanf ("%d",&sayi6);
				
				dikdortgeninalani= sayi5*sayi6;
				printf ("Dikdortgenin Alani: %d",dikdortgeninalani); break;
				
		case 7: printf ("Dikdortgenin uzun kenarini giriniz: ");
				scanf ("%d",&sayi7);
				printf ("Dikdortgenin kisa kenarini giriniz: ");
				scanf ("%d",&sayi8);
				
				dikdortgenincevresi= 2*(sayi7*sayi8);
				printf ("Dikdortgenin Cevresi: %d",dikdortgenincevresi); break;
		
		case 8:  printf ("Birinci Degeri Giriniz: ");
    			 scanf ("%d",&sayi9);
    			 printf ("Ikinci Degeri Giriniz: ");
    			 scanf ("%d",&sayi10);
    			 printf ("Ucuncu Degeri Giriniz: ");
    			 scanf ("%d",&sayi11);
    			 
    			 dikdortgeninhacmi= sayi9*sayi10*sayi11;
    			 printf ("Dikdortgenin Hacmi: %d",dikdortgeninhacmi); break;	
    			 
    	case 9: printf ("Faktoriyeri alinacak sayiyi giriniz: ");
   				scanf ("%d",&sayi12);
   				
  				for(i=1; i<=sayi12; sayi12--)
   					{
    				  faktoryel=faktoryel*sayi12;
   					}
   					
   					printf("Faktoriyelin Sonucu: %d",faktoryel); break;
   					
   		case 10: printf ("Kupun bir kenarini giriniz: ");
   				 scanf ("%d",&sayi13);
   				 
    			 kupunhacmi= sayi13*sayi13*sayi13;
    			 printf ("Kupun Hacmi: %d",kupunhacmi); break;
    			 
    	case 11: printf ("Kupun bir kenarini giriniz: ");
                 scanf ("%d",&sayi14);
                 kupunyuzeyalani= 6*sayi14*sayi14;
    			 printf ("Kupun yuzey alani: %d",kupunyuzeyalani); break;
   
	}
		
	return 0;
}
