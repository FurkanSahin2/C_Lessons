#include <stdio.h>
#include <stdlib.h>

//  Define: Bütün program içerisinde geçerli olabilecek tanımlama yapmamıza olanak sağlar. Yani; önişlemci komutudur. 

#define puan 2.19 // Bu yazdığımız sayesinde program derlenmeye başlamadan önce kod kısmında (main kısmında) puan gördüğü yere "2.25" atayacak.
#define puan2 3.47
#define puan3 2.48
#define puan4 1.75
 
int main() {
	
	int Turkce,Matematik,Fen,Sosyal;
	printf ("Turkce Netiniz: ");
	scanf ("%d",&Turkce);
	
	printf ("Matematik Netiniz: ");
	scanf ("%d",&Matematik);
	
	printf ("Fen Netiniz: ");
	scanf ("%d",&Fen);
	
	printf ("Sosyal Netiniz: ");
	scanf ("%d",&Sosyal);
	
	float Sozelpuan,Sayisalpuan,Sayisalpuan2,Sozelpuan2;
	
	Sozelpuan= Turkce*puan+Matematik*puan2+Fen*puan3+Sosyal*puan4+50.55;
	
	Sayisalpuan= Turkce*puan+Matematik*puan2+Fen*puan3+Sosyal*puan4+51.45;
	
	Sayisalpuan2= Turkce*puan+Matematik*puan2+Fen*puan3+Sosyal*puan4+62.50;

	Sozelpuan2= Turkce*puan+Matematik*puan2+Fen*puan3+Sosyal*puan4+49.75;

	
	printf ("Toplam Sozel Puaniniz: %5.2f \n",Sozelpuan);
	printf ("Toplam Sayisal Puaniniz: %5.2f\n",Sayisalpuan);
	printf ("Toplam Sayisal - 2 Puaniniz: %5.2f\n",Sayisalpuan2);
	printf ("Toplam Sayisal - 2 Puaniniz: %5.2f\n",Sozelpuan2);

	
	return 0;
}
