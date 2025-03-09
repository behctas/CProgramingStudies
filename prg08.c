// Klavyeden ax^2+bx+c şeklindeki ikinci dereceden bir bilinmeyenli
// denklemin a, b ve c katsayıları girildiğinde diskriminant değerini
// hesaplayan, diskriminant sıfırdan küçükse 'gerçek kök yok', 
// sıfıra eşitse 'eşit iki kök var', sıfırdan büyükse 'gerçek farklı iki kök var'
// mesajını yazdıran bir programı if else yapısı kullanarak yapınız.

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, diskriminant;
    float x1, x2;
    printf("x^2'li ifadenin degerini giriniz: ");
    scanf("%d", &a);
    printf("x'li ifadenin degerini giriniz: ");
    scanf("%d", &b);
    printf("sabit ifadenin degerini giriniz: ");
    scanf("%d", &c);    

    diskriminant = b*b - 4*a*c;

    if(diskriminant > 0){
        printf("Gercek farkli iki kok var");

        x1 = (-b - sqrt(diskriminant)) / 2 * a;
        x2 = (-b + sqrt(diskriminant)) / 2 * a;
        printf("\nx1: %f, x2: %f", x1, x2);
    }
    else if(0 == diskriminant){ // buradaki ayrıma bak
        printf("Esit iki kok var");
        // bu şekilde yazılmasının sebebi derleyicinin bu şekilde olunca bir hata mesajı vermesidir.
        // öteki türlü = ifadesi yazılırsa derleyici bunu atama işlemi olarak görür.
        x1 = x2;
        x1 = (-b) / 2 * a;
        printf("\nx1=x2 : %f", x1);
    }
    else{
        printf("Reel kok yoktur!");
    }
    // Bu yazdığım kodda çok fazla sorgu var. İşlem süresi artabiliyor

    return 0;
}