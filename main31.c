#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayi;
	double sonuc;
	
	printf ("Bir sayi girin: ");
	scanf ("%d",&sayi);
	
	sonuc=sqrt(sayi);
	printf ("Sonuc: %.10f",sonuc); // NOT: �ayet "%" ile "f" aras�na �rne�in ".5" yazacak olursak tam say�y� yazd�ktan sonra belirtti�imiz rakam adedinde ondal�k k�sm� g�sterecektir.
	
	
	
	
	
	return 0;
}
