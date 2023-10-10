#include <stdio.h>

int main() {
    float num[50];

    for(int i = 0; i < 50; i++) {
        num[i] = (float) ((i + 5 * i) % (i + 1));
    }   

    for(int i = 0; i < 50; i++) {
        printf("%.2f \n", num[i]);
    }   

    return 0;
}