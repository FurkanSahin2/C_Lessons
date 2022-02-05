#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	int en,boy,i,j;
	printf ("En degerini giriniz: ");
	scanf ("%d",&en);
	
	printf ("Boy degerini giriniz: ");
	scanf ("%d",&boy);
	printf ("\n");
	
	for (i=1;i<=boy;i++)
	{
		for (j=1;j<=en;j++)
		{
			printf ("*");
		}
		printf ("\n");
	}


	int taban, i, j;
	printf ("Dik ucgenin taban degerini giriniz: ");
	scanf ("%d",&taban);

	
	for (i=1;i<=taban;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	
	// Ýçi '*' ile dolu üçgen çizim kodu;
	
  	int i,j,uzunluk;
  	
  	printf ("Taban uzunlugunu giriniz: ");
  	scanf ("%d",&uzunluk);
  	
  	for (i=1;i<=uzunluk;i++)
  	{
  		for (j=1;j<=uzunluk-i;j++)
  		{
  			printf (" ");
		  }
		
		for (j=1;j<=i;j++)
			{
  			printf (" *");
		  }
		  printf ("\n");
	  }
	
	*/
	
	int a,b,c,tabanuzunluk;
	
	printf ("Ucgenin taban uzunlugunu giriniz: ");
	scanf ("%d",&tabanuzunluk);
	printf ("\n");
	
	for (a=1;a<=tabanuzunluk;a++)
	{
		for (b=1;b<=tabanuzunluk-a;b++)
		{
			printf (" ");
		}
		for (c=1;c<=a;c++)
		{
			printf (" *");
		}
		printf ("\n");
	}
	
	

	
	
	
	
	
	
	
	
	return 0;
  }

