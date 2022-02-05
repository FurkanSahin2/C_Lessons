#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int secim,a,a1,a2,b,b1,b2,c,c1,a3,b3,yildiz,bosluk,bosluk_iki;
  
  printf("***Yildizlarla Sekil Olusturma Uygulamasina Hosgeldiniz***\n\n");
  printf("1- Insan resmi gormek icin ...\n");
  printf("2- Kelebek resmi gormek icin ...\n");
  printf("3- Saga dayali ucgen resmi gormek icin ...\n");
  printf("4- Eskenar ucgen resmi gormek icin ...\n");
  printf("5- Eskenar dortgen resmi gormek icin ...\n");
  printf("6- Kalp resmi gormek icin ...\n");
  
  printf("\nLutfen seciminizi yapiniz [1-6]: ");
  scanf("%d",&secim);
  
  switch(secim)
  {
    case 1:
    for(a1=1;a1<2;a1++)
 {
  printf("         ******\n");
 }
 for(a=2;a<=4;a++)
 {
  printf("        ********\n");
 }
 for(a2=5;a2<6;a2++)
 {
  printf("         ******\n");
 }
 for(b1=6;b1<7;b1++)
 {
  printf("    *************** \n");
 }
 for(b=7;b<15;b++)
 {
  printf("***  *************  ***\n");
 }
 for(b2=15;b2<16;b2++)
 {
  printf("      *************\n");
 }
 for(c=16;c<23;c++)
 {
  printf("     ***     *****\n");
 }
 for(c1=23;c1<25;c1++)
 {
  printf("    *****   *******\n");
 }
  break;
    
    case 2:
  
  bosluk=28;
  bosluk_iki=0;
  
 for(a=1;a<=15;a++)
 {
  for(b=1;b<=a;b++)
  {
  printf("*");
     }
     for(c=1;c<=bosluk;c++)
     {
      printf(" ");
  }
  for(b=1;b<=a;b++)
  {
  printf("*");
     }
     printf("\n");
     bosluk=bosluk-2;
 }
 
 for(a=15;1<=a;a--)
 {
  for(b=1;b<=a;b++)
  {
   printf("*");
  }
  for(c=1;c<=bosluk_iki;c++)
  {
   printf(" ");
  }
  for(b=1;b<=a;b++)
  {
   printf("*");
  }
  bosluk_iki+=2;
  printf("\n");
 }
   break; 
    
    case 3:
    for(a=1;a<=10;a++)
 {
  for(b=10;a<=b;b--)
  {
   printf(" ");
  }
  for(c=1;c<=a;c++)
  {
   printf("*");
  }
  
  printf("\n");
 }
 break;
 
 case 4:
 
 for(a=1;a<=15;a++)
 {
  for(b=1;b<=15-a;b++)
  {
   printf(" ");
  }
  for(c=1;c<=(2*a)-1;c++)
  {
   printf("*");
  }
  printf("\n");
 }
 break;
 
 case 5:
 
 yildiz = 1;
    bosluk = 10 - 1;
    
    for(a=1; a<10*2; a++)
    {
        for(b=1; b<=bosluk; b++)
            printf(" ");
        
        for(b=1; b<yildiz*2; b++)
            printf("*");
        
        printf("\n");
        
        if(a<10)
        {
            bosluk--;
            yildiz++;
        }
        else
        {
            bosluk++;
            yildiz--;
        }
    }
 break;
 
 case 6:
 
 for(a=15/2;a<=15;a+=2)
    {
        for(b=1;b<15-a;b+=2)
        {
            printf(" ");
        }

        for(b=1;b<=a;b++)
        {
            printf("*");
        }

        for(b=1;b<=15-a;b++)
        {
            printf(" ");
        }

        for(b=1;b<=a;b++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(a=15; a>=1; a--)
    {
        for(b=a;b<15;b++)
        {
            printf(" ");
        }

        for(b=1;b<=(a*2)-1;b++)
        {
            printf("*");
        }

        printf("\n");
    }
    break;
    
 
     default: printf("\nHatali sayi girdiniz.");
  }
  
	return 0;
}
