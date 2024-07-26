#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayi;
	double sonuc;
	
	printf ("Bir sayi girin: ");
	scanf ("%d",&sayi);
	
	sonuc=sqrt(sayi);
	printf ("Sonuc: %.10f",sonuc); // NOT: Şayet "%" ile "f" arasında örneğin ".5" yazacak olursak tam sayıyı yazdıktan sonra belirttiğimiz rakam adedinde ondalık kısmı gösterecektir.

	
	return 0;
}
