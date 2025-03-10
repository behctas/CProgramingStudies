//  C programlama dilinde constant'lar

#include <stdio.h>

int main(){
    const int SaattekiDakikaSayisi = 60;
    const float PI = 3.14;

    printf("%d\n", SaattekiDakikaSayisi);
    printf("%f\n", PI);

    //PI = PI + %; // PI const bir ifade olduğundan dolayı bu işlem yapılamaz 

    return 0; 
}