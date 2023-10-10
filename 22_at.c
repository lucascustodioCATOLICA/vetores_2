#include <stdio.h>

int main() {
    int a[10];
    int b[10];
    int c[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite um valor para A: ");
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 10; i++) {
        printf("Digite um valor para B: ");
        scanf("%d", &b[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(i % 2 == 0) {
            c[i] = a[i];
        } else {
            c[i] = b[i];
        }
    }

    for(int i = 0; i < 10; i++) {
        printf("c: %d \n", c[i]);
    }

    return 0;
}