#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayi;
	double sonuc;
	
	printf ("Bir sayi girin: ");
	scanf ("%d",&sayi);
	
	sonuc=sqrt(sayi);
	printf ("Sonuc: %.10f",sonuc); // NOT: Þayet "%" ile "f" arasýna örneðin ".5" yazacak olursak tam sayýyý yazdýktan sonra belirttiðimiz rakam adedinde ondalýk kýsmý gösterecektir.
	
	
	
	
	
	return 0;
}
