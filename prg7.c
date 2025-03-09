//karşilaştirma işleleri

/*

&& --> ve
|| --> veya
! --> değil
? --> koşul doğruysa bir değer döndürür yanlış ise başka bir değer döndürür
*/

#include <stdio.h>

int main(){
    int sayi, b;
    char a;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    printf("Sonuc = %d", sayi >= 10 ? sayi * sayi: sayi);
    // python dilindeki inline fonksiyonlara benzer
    a = sayi >= 5 ? 'E' : 'H';
    printf("\nVerilen cevap = %c", a);

    b = (sayi >= 10 ? sayi * sayi: sayi) * 5;
    printf("\nB'nin degeri = %d", b);
    return 0;
}