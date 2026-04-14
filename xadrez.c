#include <stdio.h>

void moverTorre (int casas) {
        if (casas > 0) {
            printf("Direita\n");
            moverTorre(casas - 1);
        }
        
    }

void moverCavalo () {
    for (int i = 0, j = 1; i < 2; i++, j++) {
        printf("Cima");
        if (j == 2) {
            printf("Direita\n");
        }
    }
}

void moverBispo() {
    for (int i = 0; i < 5; i++) {
        while (1) {
            printf("Cima\n");
            break;
        }
        printf("Direita\n");
    }
}

void moverRainha (int casas) {
        if (casas > 0) {
            printf("Esquerda\n");
            moverRainha(casas - 1);
        }
        
    }
void main () {

    int numBispo = 0;
    int numRainha = 0;

    

    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    while (numBispo < 5) {
        printf("Cima, Direita\n");
        numBispo++;
    }

    do {
        printf("Esquerda\n");
        numRainha++;
    } while (numRainha < 8);

    int movimentoCavaloConcluido = 0;
    
    while (movimentoCavaloConcluido == 0) {

        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
        movimentoCavaloConcluido++;
    }
    printf("---MESTRE---\n");
    printf("---TORRE---\n");
    moverTorre(5);
    printf("---CAVALO---\n");
    moverCavalo();
    printf("---BISPO---\n");
    moverBispo();
    printf("---RAINHA---\n");
    moverRainha(8);




}
