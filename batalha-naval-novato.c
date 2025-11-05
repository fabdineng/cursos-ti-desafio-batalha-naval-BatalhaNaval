#include <stdio.h>

int main(){

    
    char *colunas[11] = {"  ", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"}; // VETOR PARA INFORMAR AS COLUNAS DO TABULEIRO
    int tabuleiro [10] [10]; // MATRIZ PARA INICIALIZAR O TABULEIRO 10X10
    int linha = 1; // VARIÁVEL PARA EXIBIR O NUMERO DA LINHA DO TABULEIRO
    int navio_azul [3], navio_vermelho[3];
    int pos_navio_c = 0, pos_navio_l = 0;

    for (int l = 0; l < 10; l++) { // INICIALIZANDO A MATRIZ DO TABULEIRO
        for (int c = 0; c < 10; c++) {
            tabuleiro[l][c] = 0;
        }
        
        }
    if (posicao_navio = v) {
        for (int l = 0; l < 3; l++)
            navio_azul [l][c];
            c += 1;

    printf("TABULEIRO BATALHA NAVAL \n\n");    // IMPRIMINDO A MATRIZ DO TABULEIRO
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