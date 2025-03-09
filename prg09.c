// klavyeden girilen bir tam sayının tek mi çift mi olduğunu uygun bir mesaj 
// ile ekranda gösteren c programını if else yapısı kullanarak yazınız

#include <stdio.h>

int main(){
    int sayi; // int kalan oluşturmaya gerek yok. Çünkü daha sonra kullanmayacağız
    // Oluşturursak bellekte gereksiz 4 byte yer doldurmuş olacaktık.
    printf("Bir tam sayi giriniz: ");
    scanf("%d", &sayi);

    if(0 == sayi % 2){
        printf("%d sayisi cift sayidir", sayi);
    }

    if(0 != sayi % 2){
        printf("%d sayisi tek sayidir", sayi);
    }

    return 0;
}