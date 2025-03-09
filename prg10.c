// Klavyeden girilen bir karakterin harf mi, rakam mi yoksa özel bir
// sembol mü olduğunu belirleyen programi else if yapisi kullanarak yaziniz

#include <stdio.h>

int main(){
    char karakter;

    while (1){
        printf("\nBir karakter tusuna basin ardindan ENTER: ");
        scanf("%c", &karakter);

        if(karakter >= 0 && karakter <= '9'){
            printf("%c karakteri bir rakamdir", karakter);
        }
    
        else if((karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z')){
            printf("%c karakteri bir harftir", karakter);
        }
    
        else{
            printf("%c karakteri bir semboldür", karakter);
        }
    }
    
    return 0;
}