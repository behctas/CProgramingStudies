/*
NOTLAR:
 define: sabit bir ifadedir
 #define MAX 100
*/

#include <stdio.h>

int main(){
    int a, b, c;
    // 64 bit mimari --> int=4byte
    // 32 bit mimari --> int=2byte

    a = 10;
    b = 20;
    c = a + b;

    printf("c = %d\n", c);
    printf("%d %% %d = %d\n", a, b, c);
    // çıktı 10
    
    return 0;
}