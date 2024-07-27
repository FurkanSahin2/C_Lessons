#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int satir,sutun,i,j,k,l,m,n,a,b,c,d,e,f,g,h,a1,b1,c1,d1,e1,f1,g1,h1;

	printf("Matrislerin Satir Sayisi --> ");
	scanf("%i",&satir);
	printf("Matrislerin Sutun Sayisi --> ");
	scanf("%i",&sutun);
	
	int matris1[satir][sutun];
	int matris2[satir][sutun];
	int toplam[satir][sutun];
	int carpim[satir][sutun];
	int fark[satir][sutun];
	float bolum[satir][sutun];
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("1.Matrisin %d-%d Elemanini Giriniz --->",i+1,j+1);
			scanf("%d",&matris1[i][j]);
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
	/////////////////////////////
		for(e=0;e<satir;e++)
	{
		for(f=0;f<sutun;f++)
		{
			fark[e][f]=matris1[e][f]-matris2[e][f];
		}
	}
	printf("\n");
	printf("2 Matrisin Farki: \n");
    for(g=0;g<satir;g++)
    {
    	for(h=0;h<sutun;h++)
    	{
    		printf("%d ",fark[g][h]);
		}
		printf("\n");
		}
	////////////////////////////
	for(a1=0;a1<satir;a1++)
	{
		for(b1=0;b1<sutun;b1++)
		{
			carpim[a1][b1]=matris1[a1][b1]*matris2[a1][b1];
		}
	}
	printf("\n");
	printf("2 Matrisin Carpimi: \n");
    for(c1=0;c1<satir;c1++)
    {
    	for(d1=0;d1<sutun;d1++)
    	{
    		printf("%d ",carpim[c1][d1]);
		}
		printf("\n");
		}
	////////////////////////////
/*	for(e1=0;e1<satir;e1++)
	{
		for(f1=0;f1<sutun;f1++)
		{
			bolum[e1][f1]=matris1[e1][f1]/matris2[e1][f1];
		}
	}
	printf("\n");
	printf("2 Matrisin Bolumu: \n");
    for(g1=0;g1<satir;g1++)
    {
    	for(h1=0;h1<sutun;h1++)
    	{
    		printf("%f ",bolum[g1][h1]);
		}
		printf("\n");
		}
	///////////////////////
	getch();
	*/
	
	return 0;
}
