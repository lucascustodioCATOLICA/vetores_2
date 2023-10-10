#include <stdio.h>

int main () {
    int num[5] = {5, 2, 7, 4, 3};
    int cod;

    printf("Digite um valor inteiro: ");
    scanf("%d", &cod);

    if(cod == 0) {
        return 0;       
    }
    if(cod == 1) {
        for(int i = 0; i < 5; i++) {
            printf("Pos %d: %d \n", i, num[i]);
        }        
        return 0;
    }
    if(cod == 2) {
        for(int i = 4; i >= 0; i--) {
            printf("Pos %d: %d \n", i, num[i]);
        }        
        return 0;
    }
    
    printf("Codigo invalido!");
    return 0;
}