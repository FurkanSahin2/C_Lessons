#include <stdio.h>
#include <stdlib.h>


int main() {
	// Matrislerde Toplama ��lemi
	/*	
	int m1 [2][2]= {10,12,15,18};
	int m2 [2][2]= {8,11,14,6};
	int toplam [2][2];
	
	int i,j,k,l;
	
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			toplam [i][j]= m1 [i][j] + m2 [i][j];
			printf("%d  ",toplam [i][j]); 
		}
		printf ("\n");
	}
	
	int m1[2][3]; //m1 ve m2 elemanlar�n�n say�s� belirlenir.
	int m2[2][3];
	int toplam[2][3]; //toplam k�mesinin say�s� belirlenir.
	int i,j,k,l;
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("M1 Elemani: ",i,j); //m1 k�mesinin satir say�s�n�n yerine gelcek i d�ng�s�
			scanf("%d",&m1[i][j]);      //m1 k�mesinin sutun say�s�n�n yerine gelcek j d�ng�s�
		}                            
	}
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
		    printf("M2 Elemani: ",i,j); //m2 k�mesinin satir say�s�n�n yerine gelcek i d�ng�s�
			scanf("%d",&m2[i][j]);	    //m2 k�mesinin sutun say�s�n�n yerine gelcek j d�ng�s�
		}
    }
    for (i=0;i<2;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		toplam[i][j]=m1[i][j]+m2[i][j]; //toplam k�mesinin sat�r m1+m2 sat�r�,
		}                                   // toplam k�mesinin sutununa m1+m2 sutunu gelecek d�ng� 
	}
	printf("\n");
	for (k=0;k<2;k++)
	{
		for (l=0;l<3;l++)
		{
			printf("%d ",toplam[k][l]);
		}
	}
	*/
	int satir,sutun,i,j,k,l,m,n,a,b,c,d;

	printf("Matrislerin Satir Sayisi --> ");
	scanf("%i",&satir);
	printf("Matrislerin Sutun Sayisi --> ");
	scanf("%i",&sutun);
	
	int matris1[satir][sutun];
	int matris2[satir][sutun];
	int toplam[satir][sutun];
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("1.Matrisin %d-%d Elemanini Giriniz --->",i+1,j+1);
			scanf("%d",&matris1[i][j]);
		}
	}
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("2.Matrisin %d-%d Elemanini Giriniz --->",i+1,j+1);
			scanf("%d",&matris2[i][j]);
		}
	}
	printf("\n");
	
	printf("1.Matris:\n");
	
	for(k=0;k<satir;k++)
	{
		for(l=0;l<sutun;l++)
		{
			printf("%i ",matris1[k][l]);
		}
	printf("\n");
	}
	printf("\n");
	printf("2.Matris\n");
	
		for(m=0;m<satir;m++)
	{
		for(n=0;n<sutun;n++)
		{
			printf("%d ",matris2[m][n]);
		}
	printf("\n");
	}
	/////////////////////////////
	for(a=0;a<satir;a++)
	{
		for(b=0;b<sutun;b++)
		{
			toplam[a][b]=matris1[a][b]+matris2[a][b];
		}
	}
	printf("\n");
	printf("2 Matrisin Toplami: \n");
    for(c=0;c<satir;c++)
    {
    	for(d=0;d<sutun;d++)
    	{
    		printf("%d ",toplam[c][d]);
		}
		printf("\n");
		}
	
	
	return 0;
}
