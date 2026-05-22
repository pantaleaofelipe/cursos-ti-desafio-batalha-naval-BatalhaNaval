#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){

    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int linhas = 10;
    int colunas = 10;

    int tabuleiro[10][10] = {0};
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};

    // Navio 1: ocupa as posições verticais 1, 2 e 3 e está na linha 4. 
    int posicaoHorizontalNavio1 = 3;
    int posicaoVerticalNavio1 = 0;
    for (int i = 0; i < 3; i++) {
        tabuleiro[posicaoHorizontalNavio1][posicaoVerticalNavio1 + i] = navio1[i];
    }

    // Navio 2: ocupa as posições horizontais 8 na linha 8.
    int posicaoHorizontalNavio2 = 5;
    int posicaoVerticalNavio2 = 7;
    for (int i = 0; i < 3; i++) {
        tabuleiro[posicaoHorizontalNavio2 + i][posicaoVerticalNavio2] = navio2[i];
    }

    // O for aninhado é impresso na tela com as posições dos navios 1 e 2.
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }  

return 0;

}