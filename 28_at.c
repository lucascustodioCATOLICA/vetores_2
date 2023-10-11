#include <stdio.h>

int main () {
    int arr[10];
    int v1[10]= {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int v2[10]= {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

    for(int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0) {
            v2[i] = arr[i];
        } else {
            v1[i] = arr[i];
        }
    }

    for(int i = 0; i < 10; i++) {
        if(v1[i] != -1) {
            printf("V1[%d]: %d \n", i, v1[i]);
        }
    }

    for(int i = 0; i < 10; i++) {
        if(v2[i] != -1) {
            printf("V2[%d]: %d \n", i, v2[i]);
        }
    }

    return 0;
}