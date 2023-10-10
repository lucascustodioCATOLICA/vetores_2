#include <stdio.h>

int main() {
    int aluno[10];
    float altura[10];

    int maior = 0;
    int menor = 99999999;

    int pos_maior = 0;
    int pos_menor = 9;

    for(int i = 0; i < 10; i++) {
        printf("Digite o num do aluno: ");
        scanf("%d", &aluno[i]);
        printf("Digite a altura do aluno: ");
        scanf("%f", &altura[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(altura[i] > altura[pos_maior]) {
            pos_maior = i;
        }
        if(altura[i] < altura[pos_menor]) {
            pos_menor = i;
        }
    }

    printf("O NUM e ALTURA do MAIOR aluno eh %d %.2f", aluno[pos_maior], altura[pos_maior]);
    printf("O NUM e ALTURA do MENOR aluno eh %d %.2f", aluno[pos_menor], altura[pos_menor]);

    return 0;
}