#include <stdio.h>

int main() {
    int a[10];
    int b[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite um valor para A: ");
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 10; i++) {
        printf("Digite um valor para B: ");
        scanf("%d", &b[i]);
    }

    for(int i = 0; i < 10; i++) {
        printf("Soma de A-B: %d \n", a[i]-b[i]);
    }

    return 0;
}