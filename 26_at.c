#include <stdio.h>
#include <math.h>

int main () {
    int arr[10];
    float m = 0;
    float somatorio = 0;
    float desvio_padrao = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i++) {
        m += arr[i];
    }
    m = (float) m / 10;

    for(int i = 0; i < 10; i++) {
        somatorio += pow((arr[i] - m), 2);
    }

    somatorio = (float) somatorio / 10 - 1;
    desvio_padrao = sqrt(somatorio);

    printf("Desvio Padrao: %.2f \n", desvio_padrao);
    
    return 0;
}