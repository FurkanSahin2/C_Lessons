#include <stdio.h>
#include <stdlib.h>

// Listing Arrays, Adding Array Elements

int main() {
	/*
 
	int sayilar[]={6,4,3,7,9,8,0};
	int i;
	
	for ( i=0;i<7;i++)
	{
		printf ("  %d",sayilar[i]);
	}
	
	
	  char sehir[]={'a','n','k','a','r','a'};
    char sehir1[]={'a','d','a','n','a'};
    char sehir2[]={'b','u','r','s','a'};

    int i;
    i=0;
    while(i<4)
    {
    printf("%s\n%s\n%s\n",sehir,sehir1,sehir2);
    i++;
    }
	
	
	int sayilar[]={10,30,45,25};
	int toplam=0;
	int i;
	
	for (i=0;i<4;i++)
	{
		toplam+= sayilar[i];
	}
	printf ("Toplam: %d",toplam);
 
	*/
	
	int sayilar[]={1,2,3,4,5,6,7,8,9};
	
	int faktor,i;
	faktor=1;
	
	
	
	for (i=0;i<9;i++)
	{
		faktor= faktor*sayilar[i];
	}
	printf ("%d",faktor);
	
	
	return 0;
}
