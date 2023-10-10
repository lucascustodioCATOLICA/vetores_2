#include <stdio.h>

int main() {
    int num[100];
    int pos = 0;

    for(int i = 0; i < 1000; i++) {
        if(i % 7 == 0 || i == 1 || i % 10 == 7) {
            num[pos] = i;
            pos++;
        }
        
        if(pos == 100) {
            break;
        }
    }

    for(int i = 0; i < pos; i++) {
        printf("%d \n", num[i]);
    }

    return 0;
}