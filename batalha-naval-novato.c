#include <stdio.h>

int main(){

    int index;


    char *colunas[11] = {"  ", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    int tabuleiro [10] [10];
    int linha = 1;    
    for (int l = 0; l < 10; l++) {
        for (int c = 0; c < 10; c++) {
            tabuleiro[l][c] = 0;
        }
        
        }
    printf("TABULEIRO BATALHA NAVAL \n\n");    
    printf("%s %s %s %s %s %s %s %s %s %s %s \n", colunas[0], colunas[1], colunas[2], colunas[3], colunas[4], colunas[5], colunas[6], colunas[7], colunas[8], colunas[9], colunas[10]);
    for (int l = 0; l < 10; l++) {
        for (int c = 0; c < 1; c++) {
            if (linha <=9) {
                printf(" %d %d %d %d %d %d %d %d %d %d %d \n", linha, tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c]);
            }
                else {
                printf("%d %d %d %d %d %d %d %d %d %d %d \n", linha, tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c], tabuleiro[l][c]);
                }
        }
    linha += 1;    
    }
    

    return 0;
}