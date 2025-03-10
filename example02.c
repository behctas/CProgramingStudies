/*
Karekök hesabının C programlama dilinde yapılması
*/

#include <stdio.h>
#include <math.h>

int main(){
    double sayi, karekok;

    printf("Karekoku hesaplanacak sayiyi giriniz: ");
    scanf("%lf", &sayi);
    karekok = sqrt(sayi);
    printf("%.2lf", sayi);

    return 0;
}