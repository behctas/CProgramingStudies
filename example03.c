/*
C programlama dilinde string'ler üzerinde işlem yapma
*/

#include <stdio.h>

int main(){
    char karakter = 'k';
    // Burada tek tırnak koymak gerekiyor
    printf("%c\n", karakter);

    char karsilama_mesaji[] = "Hello World!";
    // Burada çift tırnak koymak gerekiyor
    printf("%s", karsilama_mesaji);
    /*
    C programlama dilinde, tek bir karakteri temsil etmek için tek tırnak ('k')
    kullanılırken, bir karakter dizisi (string) temsil etmek için çift tırnak
    ("Hello World!") kullanılır.
    */
    
    return 0;   
}