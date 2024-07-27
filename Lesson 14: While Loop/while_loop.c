#include <stdio.h>
#include <stdlib.h>


int main() {
  
  /*

	int i=1;
	
	
	while (i<=10)
	{
		printf ("  %d",i);
		i++;
	}

	
	// 1-20 arası çift sayıları gösteren ancak 14 sayısını yazdırmayan kodlama örneği.
  int sayi;
	sayi=1;
	
	while(sayi<=20)
	{   
	
		if(sayi!=14)
		{
			printf("%d\n",sayi);
		}
        sayi+=2;
	}
 
	
	
	//3-60 arası tek sayıları gösteren ancak 51 sayısını göstermeyen kodlama örneği
	
	int sayi;
	sayi=3;
	
	while (sayi<=60)
	{
		if (sayi!=51)
		{
			printf ("  %d",sayi);
		}
		sayi+=2;
	}
	
	// Klavye ile girilen sayının faktoryelini while ile bulan kodu giriniz.

	int sayi, faktor;
	faktor=1;
	
	printf ("Faktoryelinin bulunmasini istediginiz sayiyi giriniz: ");
	scanf ("%d",&sayi);
	
	while (sayi>1)
	{
		faktor= faktor*sayi; // faktor *= sayi;
		sayi--;
	}
	
	printf ("Sonuc: %d",faktor);
	
  */
	
	
	int sayi, faktor;
	faktor=1;
	sayi= 7;
	
	while (sayi>1)
	{
		faktor=faktor*sayi;
		sayi--;
	}
	
	printf ("Sonuc: %d",faktor);

 		
	return 0;
}
