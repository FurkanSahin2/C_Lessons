#include <stdio.h>
#include <stdlib.h>

// Makro Tanımlama ve Makro Kullanımı

#define Maksimum(s1,s2) (s1>s2) ? s1 : s2 
// Birinci parantez içi değişkenlerimiz, ikinci parantez içi şartımız, soru işaretinden sonra ki ifade ise belirttiğimiz şart doğru ise ":" işaretinin sol tarafındakini, yanlış ise ":" işaretinin sağ tarafındakini yazdır demektir. 
// Şayet "? s1 : s2" kısmı yazılmayacak olursa program işlemin doğru veya yanlışlığını bize "True - False" şeklinde bildirir.

int main() {
	
	printf ("%d\n",Maksimum(5,7));
		
	return 0;
}
