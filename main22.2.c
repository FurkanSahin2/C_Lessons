#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {	
	//Örnek Kod Çalýþmasý
	int i,j,k,l,a,orta,taban,yildiz,giris,bosluk,secenek,en,boy;
	
	system("COLOR E");
	printf("****Sekil Olusturma Programina Hos Geldiniz*****");
	printf("\n\n");
	printf("1-Kare/Dikdortgen Olusturma\n");
	printf("2-Dik Ucgen Olusturma\n");
	printf("3-Simetrik Dik Ucgen Olusturma\n");
	printf("4-Tersine Dik Ucgen Olusturma\n");
	printf("5-Tam Ucgen Olusturma\n");
	printf("6-Kelebek Sekli Olusturma\n");
	printf("7-Baklava Dilimi Olusturma\n");
	printf("8-Sekilli Ucgen Olusturma\n");
	printf("9-Sekilli Baklava Dilimi Olusturma");
	printf("\n\n");
	donus:
	printf("\n");
	printf("Seciminizi Yapiniz: ");
	
	scanf("%i",&secenek);
	switch(secenek){
		
	case 1:
		
	printf("Eni: ");
	scanf("%i",&en);
	printf("Boyu: ");
	scanf("%i",&boy);
	for(i=1;i<=en;i++)
	{
	for(j=1;j<=boy;j++)
	{
		printf("*");
	}
	printf("\n");
	}
	goto donus;
	break;
	case 2:
	
	printf("Tabani kac yildizli olsun? ");
	scanf("%i",&taban);
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	printf("\n");
	}
	goto donus;
	break;
	case 3:
	
	printf("Ortadaki karakter kac yildizli olsun? ");
	scanf("%i",&orta);
	for(i=1;i<=orta;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(k=1;k<=orta;k++)
	{
		for(l=orta;l>=k;l--)
		{
			printf("*");
		}
	printf("\n");
	}
	goto donus;
	break;
	case 4:
	
	printf("Tabani kac yildizli olsun? ");
	scanf("%i",&taban);
	
	yildiz=1;
	bosluk=taban-1;
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=bosluk;j++)
		{
			printf(" ");
		}
		for(j=1;j<=yildiz;j++)
		{
			printf("*");
		}
		printf("\n");
	bosluk--;
	yildiz++;
	}
	goto donus;
	break;	
	case 5:
	
	printf("Kac basamakli olsun?: ");
	scanf("%i",&taban);
	
	yildiz=1;
	bosluk=taban-1;
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=bosluk;j++)
		{
			printf(" ");
		}
		for(j=1;j<=yildiz;j++)
		{
			printf("*");
		}
		printf("\n");
	bosluk--;
	yildiz+=2;
	}
	goto donus;
	break;
	case 6:
	printf("Ortadaki karakter kac yildizli olsun? ");
	scanf("%i",&orta);
	
		for(i=1;i<=orta;i++){     
	
		for(j=1;j<=i;j++){    
			printf("*");
		}
		for(j=1;j<=orta-i;j++){     
			printf(" ");
		}
		for(j=1;j<=orta-i;j++){    
			printf(" ");
		}
		for(j=1;j<=i;j++){      
			printf("*");
		}
		printf("\n");   	
	
	}
	
	for(i=orta;i>=1;i--){     
		
		for(j=1;j<=i;j++){
			printf("*");	
		}
		for(j=1;j<=orta-i;j++){
			printf(" ");
		}
		for(j=1;j<=orta-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");	
		}
		printf("\n");
	}
	goto donus;
	break;
	case 7:
	printf("Kac basamakli olsun?: ");
	scanf("%i",&taban);
	
	yildiz=1;
	bosluk=taban-1;
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=bosluk;j++)
		{
			printf(" ");
		}
		for(j=1;j<=yildiz;j++)
		{
			printf("*");
		}
		printf("\n");
	bosluk--;
	yildiz+=2;
	}
	
	yildiz-=4;
	bosluk=1;
	
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=bosluk;j++)
		{
			printf(" ");
		}
		for(j=1;j<=yildiz;j++)
		{
			printf("*");
		}
		printf("\n");
	bosluk++;
	yildiz-=2;
	}
	goto donus;
	break;
	case 8:
		
	printf("Kac basamakli olsun?: ");
	scanf("%i",&taban);
	
	yildiz=2;
	bosluk=taban-1;
	for(i=1;i<=taban;i++)
	{
		for(j=0;j<bosluk;j++)
		{
			printf(" ");
		}
		for(j=0;j<yildiz;j++)
		{
			if(j==0)
			printf("/");
			else if(j==yildiz-1)
			printf("\\");
			else
			printf("*");
		}
		printf("\n");
	bosluk--;
	yildiz+=2;
	}	
	goto donus;
	break;
	case 9:
		
    printf("Kac basamakli olsun?: ");
	scanf("%i",&taban);
	
	yildiz=1;
	bosluk=taban-1;
	for(i=0;i<taban;i++)
	{
		for(j=0;j<bosluk;j++)
		{
			printf(" ");
		}
		for(j=0;j<yildiz;j++)
		{
			if(j==0)
			printf("/");
			else if(j==yildiz-1)
			printf("\\");
			else
			printf("*");
		}
		printf("\n");
	bosluk--;
	yildiz+=2;
	}
	
	yildiz-=2;
	bosluk=0;
	
	for(i=0;i<taban;i++)
	{
		for(j=0;j<bosluk;j++)
		{
			printf(" ");
		}
		for(j=0;j<yildiz;j++)
		{
			if(j==0)
			printf("\\");
			else if(j==yildiz-1)
			printf("/");
			else
			printf("*");
		}
		printf("\n");
	bosluk++;
	yildiz-=2;
	}
	goto donus;
	break;
	default: printf("HATA");
	goto donus;

	
	return 0;
}
}
