#include <stdio.h>
#include <stdlib.h>

	enum sehirler
	{
		Adana,Adiyaman,Afyon,Agri,Amasya,Ankara,Antalya,Artvin,Aydin,Balikesir
	};

int main() {
	
	enum sehirler il;
	il=Agri;
	printf ("%d",il+1); 


	return 0;
}
