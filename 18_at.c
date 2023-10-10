#include <stdio.h>

int main () {
    int num[10] = {5, 2, 7, 4, 3, -2, 6, -5, 10. -3};
    int mult;
    int count[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

    printf("Digite um valor inteiro: ");
    scanf("%d", &mult);

    for(int i = 0; i < 10; i++) {
        if(num[i] % mult == 0) {
            count[i] = i;
        }
    }

    for(int i = 0; i < 10; i++) {
        if(count[i] != -1) {
            printf("%d \n", num[count[i]]);
        }
    }
    
    return 0;
}