#include <stdio.h>

int findValue(int value, int *num) {
    int count = 0;
    for(int i = 0; i < 10; i++) {
        if (value == num[i]) {
            count++;
        }
        if(count == 2) {
            return i;
        }
    }

    return -1;
}

int main() {
    int num[10];
    int equals[10];
    int tam_equals = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &num[i]);
    }
    
    for(int i = 0; i < 10; i++) {
        int pos = findValue(num[i], num);

        if(pos != -1 && findValue(equals[pos], equals) == -1) {
            equals[tam_equals] = num[pos];
            tam_equals++;
        }
    }

    for(int i = 0; i < tam_equals; i++) {
        printf("Valor repetido: %d \n", num[i]);
    }


    return 0;
}