// Switch deyimi. Switch ile yapılan her şey if ile yapılır ama tersi olmaz!
// ondalık string vb ifadeler switch ile karşılaştırılamaz. Switch deyiminde
// sadece karşılaştırma var
#include <stdio.h>

int main(){
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    switch(sayi % 2)
    {
        case 0:
                // işlem sonucunda kalan sıfır eşit ise
                printf("%d cift sayidir.\n", sayi);
                break;
        
        case 1:
                // işlem sonucunda kalan sıfır eşit değilse
                printf("%d tek sayidir.\n", sayi);
                break;
    }

    return 0;
}