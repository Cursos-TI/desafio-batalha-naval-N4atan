#include <stdio.h>

void printTabuleiro(int size, int matriz[size][size]){
    // Cabeçalho A, B, C, ...
    printf("   ");
    for(int c = 0; c < size; c++) {   
        printf(" %c", 'A' + c);
    }
    printf("\n");

    // Corpo
    for(int i = 0; i < size; i++) {
        printf("%2d | ", i+1); // número da linha
        for(int j = 0; j < size; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int size = 10;
    int tabuleiro[10][10] = {0};

    // Exemplo: navio vertical
    tabuleiro[0][1] = tabuleiro[1][1] = tabuleiro[2][1] = 3;
    // Exemplo: navio horizontal
    tabuleiro[7][6] = tabuleiro[7][7] = tabuleiro[7][8] = 3;

    printf("=== Tabuleiro com navios ===\n");
    printTabuleiro(size, tabuleiro);

    // Agora Nível Mestre: matrizes de habilidades
    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    // Cone
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    cone[2][0] = cone[2][1] = cone[2][2] = cone[2][3] = cone[2][4] = 1;

    // Cruz
    cruz[0][2] = 1;
    cruz[1][2] = 1;
    cruz[2][0] = cruz[2][1] = cruz[2][2] = cruz[2][3] = cruz[2][4] = 1;
    cruz[3][2] = 1;
    cruz[4][2] = 1;

    // Octaedro
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;
    octaedro[3][1] = octaedro[3][2] = octaedro[3][3] = 1;
    octaedro[4][2] = 1;

    printf("=== Cone ===\n");
    printTabuleiro(5, cone);

    printf("=== Cruz ===\n");
    printTabuleiro(5, cruz);

    printf("=== Octaedro ===\n");
    printTabuleiro(5, octaedro);

    return 0;
}
