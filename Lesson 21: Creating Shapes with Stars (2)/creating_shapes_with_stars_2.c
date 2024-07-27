#include <stdio.h>
#include <stdlib.h>


int main() {
	/*
	int i,j;
	for (i=1;i<=5;i++)
	{
		for (j=5;j>=i;j--)
		{
			printf ("*");
		}
		printf ("\n");
	}
	
	
	int i,j,k,l;
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	
	for (k=1;k<=5;k++)
	{
		for (l=5;l>=k;l--)
		{
			printf ("*");
		}
		printf ("\n");
	}
	
	
	 int i,j,k,l;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(k=0;k<=10-(2*i);k++)
		{
			printf(" ");
		}
		for(l=1;l<=i;l++)
		{
			printf("*");
		}
		printf("\n");
		}	
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("*");	
		}
			for(k=2;k<=i*2;k++)
		{
			printf(" ");
		}
		for(l=5;l>=i;l--)
		{
			printf("*");
		}
		printf("\n");
	
	}
	
	*/
	 
	 int a,b,c,d;
	 
	 for (a=1;a<=5;a++)
	 {
	 	for (b=1;b<=a;b++)
	 	{
	 		printf ("*");
		 }
		 for (c=0;c<=10-(2*a);c++)
		 {
		 	printf (" ");
		 }
		 for (d=1;d<=a;d++)
		 {
		 	printf ("*");
		 }
		 printf ("\n");
	 }
	 for (a=1;a<=5;a++)
	 {
	 	for (b=5;b>=a;b--)
	 	{
	 		printf ("*");
		 }
		 for (c=2;c<=(2*a);c++)
		 {
		 	printf (" ");
		 }
		 for (d=5;d>=a;d--)
		 {
		 	printf ("*");
		 }
		 printf  ("\n");
	 }


	return 0;
}
