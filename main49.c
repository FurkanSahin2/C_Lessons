#include <stdio.h>
#include <stdlib.h>

	int toplam(int s1, int s2) // ��leme sokulacak fonksiyon oldu�u i�in burada "void" kullan�lmad�.
	{
		int s3;
		s3= (s1 + s2)*5-10;
		return s3; // Manas�; geri d�necek de�er s3't�r.
	}
	
	
	int main() {
	/*
	int t; // Buradaki "t" => "s3" �n kar��l��� oldu.
	t=toplam(4,5); // Buradki "4-5" => "s1 - s2" nin kar��l��� oldu.
	printf ("%d\n",t);
	
	t=toplam(4,8);
	printf ("%d",t);
	*/
	
	//�dev 1:
	
	int t,sayi1,sayi2;
	
	printf ("Birinci Sayiyi Girin: ");
	scanf ("%d",&sayi1);
	
	printf ("Ikinci Sayiyi Girin: ");
	scanf ("%d",&sayi2);
	
	t=toplam(sayi1,sayi2);
	printf ("%d",t);
	
	return 0;
}
