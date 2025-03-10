/*
C programlama dilinde string(karakter dizisi) işlemleri
*/

#include <stdio.h>
#include <string.h>

int main(){
    char ingiliz_alfabesi[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char turk_alfabesi[] = "ABCDEFGHIİJKLMNOÖPRSŞTUÜVYZ";
    char deneme[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    printf("STRLEN : %d", strlen(ingiliz_alfabesi));
    printf("\n...\n");
    printf("SIZEOF : %d", sizeof(ingiliz_alfabesi));
    printf("\n----------------\n");
    
    printf("STRLEN : %d", strlen(turk_alfabesi));
    printf("\n...\n");
    printf("SIZEOF : %d", sizeof(turk_alfabesi));
    printf("\n----------------\n");
    // İ Ö Ü --> multi karakter. Tek bir byte'da tutulmuyor. Çift sayılıyorlar

    printf("STRLEN : %d", strlen(deneme));
    printf("\n...\n");
    printf("SIZEOF : %d", sizeof(deneme)); // çok önemli
    printf("\n----------------\n");

    // sizeof --> Karakterin hafızada kapladığı boyutu gösteriyor.
    // strlen --> Efektif uzunluk. Gerçek uzunluk

    return 0;
}