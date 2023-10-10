#include <stdio.h>

int main () {
    int num[10] = {5, 2, 7, 4, 3, -2, 6, -5, 10. -3};
    int cod;

    for(int i = 0; i < 10; i++) {
        if(num[i] < 0) {
            num[i] = 0;
        }
        printf("Pos %d: %d \n", i, num[i]);
    }
        
    return 0;
}