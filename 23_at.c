#include <stdio.h>

int main() {
    int a[5];
    int b[5];
    int escalar;

    for(int i = 0; i < 5; i++) {
        printf("Digite um valor para A: ");
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("Digite um valor para B: ");
        scanf("%d", &b[i]);
    }

    for(int i = 0; i < 5; i++) {
        escalar += a[i] * b[i];
    }

    for(int i = 0; i < 5; i++) {
        printf("A e B: %d %d \n", a[i], b[i]);
    }

    printf("ESCALAR: %d \n", escalar);

    return 0;
}