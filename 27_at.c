#include <stdio.h>

int main () {
    int arr[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i++) {
        int eh_primo = 1;
        for(int j = 2; j < arr[i]; j++) {
            if(arr[i] % j == 0 && j != arr[i]) {
                eh_primo = 0;
            }
        }

        if(eh_primo == 1) {
            printf("Eh primo arr[%d] = %d \n", i, arr[i]);       
        }
        eh_primo = 1;
    }

    return 0;
}