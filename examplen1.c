/*
C Programlama dilinde 
#define ve #undef makroları 
makro : C programlamada "makro", derleyiciye belirli kod parçalarını otomatik olarak değiştirmesini söyleyen bir yapıdır.
Makrolar, derleme aşamasında işlenir, yani program çalışmadan önce kodun ilgili yerleri değiştirilir.
Makrolar, derleme aşamasında (preprocessor aşaması) çalışır.
*/

#include <stdio.h>
#include <stdlib.h>

#define BUYUK_SAYI 100000 // satır sonunda ; koyulmayacak

int BelirliIslemlerGerceklestşr(int girdi){
    return (girdi < BUYUK_SAYI);
    // return (girdi < BASKA_BIR_BUYUK_SAYI); 
    // Bu işlem yapılırsa hata alınacaktır. Çünkü bu fonksiyon BASKA_BIR_BUYUK_SAYI değişkeni kapsam dışıdır. Erişilemez
}
// Bu fonksiyon ile yukarıda tanımlanan #define BUYUK_SAYI makrosuna erişim sağlanabilir
// Bu şekilde yapılınca makro kodun her yerinde erişilebilir bir global değişken gibi oluyor

int main(){
    int ilk_degisken = 20;
    int ikinci_degisken = 25;
    int sonuc1, sonuc2;
    const int BASKA_BIR_BUYUK_SAYI = 1000000;

    printf("Buyuk Sayi : %d\n", BUYUK_SAYI);

    sonuc1 = (ilk_degisken < BUYUK_SAYI);
    // ilk değişken BUYUK_SAYI'dan küçük olduğu için 1 değeri döndürür
    printf("Sonuc 1 : %d\n", sonuc1);

    sonuc2 = (ikinci_degisken < BUYUK_SAYI);
    printf("Sonuc 2 : %d\n", sonuc2);

    #undef BUYUK_SAYI // yukarıda verilen #define ifadesini kaldırı
    #define BUYUK_SAYI  30000000 // baştan tanımlanır
    // const ve define arasındaki en temel fark #define'ın değiştirilebilir olmasıdır!

    printf("Buyuk Sayi : %d\n", BUYUK_SAYI);
}