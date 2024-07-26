## C'de strcpy() ve strncpy() Fonksiyonları

C programlama dilinde sıklıkla kullanılan iki önemli string manipülasyon fonksiyonu olan `strcpy()` ve `strncpy()`, temel olarak bir karakter dizisini diğerine kopyalamak için kullanılır. Ancak, bu iki fonksiyonun çalışma şekli ve kullanım alanları arasında önemli farklılıklar vardır.

### strcpy() Fonksiyonu
* **Görevi:** Bir karakter dizisini (kaynak) tamamen başka bir karakter dizisine (hedef) kopyalar.
* **Sözdizimi:** `strcpy(hedef, kaynak);`
* **Önemli Noktalar:**
    * Hedef dizinin boyutu, kaynak diziden en az bir karakter daha büyük olmalıdır, aksi takdirde bellek taşması (buffer overflow) oluşabilir.
    * Hedef dizinin sonuna null karakteri (`\0`) otomatik olarak eklenir.
    * **Güvenlik Açığı:** Hedef dizinin boyutu yetersizse, program çökebilir veya güvenlik açıklarına yol açabilir. Bu nedenle, özellikle kullanıcı girdilerinin olduğu durumlarda `strcpy()` yerine `strncpy()` kullanmak daha güvenlidir.

### strncpy() Fonksiyonu
* **Görevi:** Bir karakter dizisinin belirli sayıda karakterini başka bir karakter dizisine kopyalar.
* **Sözdizimi:** `strncpy(hedef, kaynak, n);`
* **Önemli Noktalar:**
    * `n` parametresi, kopyalanacak maksimum karakter sayısını belirtir.
    * Hedef dizinin boyutu `n` kadar veya daha büyük olmalıdır.
    * **Güvenlik:** `strcpy()`'e göre daha güvenlidir, çünkü kopyalanacak karakter sayısı sınırlandırılmıştır.
    * **Null Karakter:** Hedef dizinin sonuna `n` karakterden sonra null karakteri eklenmeyebilir. Bu nedenle, genellikle kopyalama işlemi tamamlandıktan sonra hedef dizinin sonuna manuel olarak null karakteri eklenir.

### Örnekler

```c
#include <stdio.h>
#include <string.h>

int main() {
    char kaynak[] = "Merhaba Dünya";
    char hedef1[20];
    char hedef2[10];

    // strcpy kullanımı
    strcpy(hedef1, kaynak);
    printf("strcpy: %s\n", hedef1);

    // strncpy kullanımı (10 karakter kopyala)
    strncpy(hedef2, kaynak, 10);
    hedef2[10] = '\0'; // Null karakter ekleme
    printf("strncpy: %s\n", hedef2);

    return 0;
}
```

### Ne Zaman Hangi Fonksiyonu Kullanmalıyız?
* **strcpy():** Hedef dizinin boyutu kesinlikle biliniyorsa ve güvenlik endişesi yoksa kullanılabilir. Ancak, genellikle daha güvenli olan `strncpy()` tercih edilir.
* **strncpy():** Kullanıcı girdilerinin olduğu veya hedef dizinin boyutu tam olarak bilinmediği durumlarda kullanılmalıdır. Kopyalanacak karakter sayısını sınırlayarak bellek taşması riskini azaltır.

**Özetle:** `strncpy()` fonksiyonu, `strcpy()` fonksiyonuna göre daha güvenlidir ve bellek taşması riskini azaltır. Bu nedenle, mümkün olduğunca `strncpy()` kullanmak tercih edilmelidir. Ancak, `strcpy()` fonksiyonu da bazı durumlarda kullanışlı olabilir.

**Ek Bilgiler:**
* `strncpy()` fonksiyonu, hedef dizinin sonuna null karakteri eklemeyeceği için, kopyalama işlemi tamamlandıktan sonra manuel olarak null karakteri eklenmesi gerekebilir.
* `string.h` kütüphanesindeki diğer string manipülasyon fonksiyonlarını (strcat, strcmp, vb.) de inceleyebilirsiniz.
