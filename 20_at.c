#include <stdio.h>

int main() {
    int num[10];
    int inpares[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &num[i]);

        int invalido = 0;
        do {
            if(num[i] <= 0 || num[i] >= 50) {
                invalido = 1;
            } else {
                invalido = 0;
            }
        } while (invalido == 1);
    }

    int count_impar = 0;
    for(int i = 0; i < 10; i++) {
        if(num[i] % 2 != 0) {
            inpares[count_impar] = num[i];
            count_impar++;
        }
    }

    for(int i = 0; i < 10; i++) {
        if(i < count_impar) {
            printf("%d %d \n", num[i], inpares[i]);
        } else {
            printf("%d \n", num[i]);
        }
    }

    return 0;
}