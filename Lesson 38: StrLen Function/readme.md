## C'de strlen() Fonksiyonu

**strlen** fonksiyonu, C programlama dilinde bir karakter dizisinin uzunluğunu bulmak için kullanılan standart bir fonksiyondur.

### Ne Yapar?
* Giriş olarak bir karakter dizisi (string) alır.
* Dizideki karakter sayısını, son karakterdeki null karakteri (`\0`) saymadan, hesaplar.
* Karakter sayısını bir tamsayı olarak geri döndürür.

### Önemli Noktalar
* Karakter dizisinin son karakteri mutlaka null karakteri (`\0`) olmalıdır. strlen fonksiyonu dizinin sonunu bu karaktere göre belirler.
* Sadece karakterleri sayar, null karakterini saymaz.
* C programlarında sıkça kullanılan bir string manipülasyon fonksiyonudur.

### Örnek
```c
#include <stdio.h>
#include <string.h>  // strlen fonksiyonu için gerekli

int main() {
  char mesaj[] = "Merhaba, dünya!";
  int uzunluk = strlen(mesaj);
  printf("'%s' dizisi %d karakter uzunluğundadır.\n", mesaj, uzunluk);
  return 0;
}
```
Bu kod, aşağıdaki çıktıyı verecektir:
```
'Merhaba, dünya!' dizisi 13 karakter uzunluğundadır.
```

### Ek Bilgiler
* strlen kullanışlı bir fonksiyon olsa da, dizinin boyutunu önceden bilmek ve bellek taşması (buffer overflow) riskini önlemek önemlidir. Dizinin toplam boyutunu almak için `sizeof` operatörünü kullanabilirsiniz, ancak null karakteri için 1 çıkarmanız gerektiğini unutmayın.
* Daha gelişmiş string manipülasyonları için C dilinde `strcpy` (dizi kopyalama), `strcat` (dizi birleştirme), `strcmp` (dizi karşılaştırma) gibi diğer fonksiyonlar da bulunmaktadır. Bunlar `string.h` header dosyası içinde yer alır.

Umarım bu açıklama strlen fonksiyonunu açıklığa kavuşturmuştur. String manipülasyonu veya C programlama ile ilgili başka sorularınız varsa çekinmeden sorabilirsiniz!
 
**strlen fonksiyonu hakkında daha fazla bilgi mi istiyorsunuz, yoksa başka bir konuya mı geçmek istiyorsunuz?**
