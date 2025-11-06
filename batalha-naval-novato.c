#include <stdio.h>

int main(){

    

    char *colunas[11] = {"  ", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    int tabuleiro [10] [10];
    int cont = 0; 
    int linha = 1;
    int col_nav_v, col_nav_h, lin_nav_v, lin_nav_h;
    
    for (int l = 0; l < 10; l++) {
        for (int c = 0; c < 10; c++) {
            tabuleiro[l][c] = 0;
        }
        
    }
    int navio_vertical[3] = {3, 3, 3};
    int navio_horizontal[3] = {3, 3, 3};
//printf("%d%d%d\n", tabuleiro[4][4], tabuleiro[4][5], tabuleiro[4][6]);
     //printf("%d\n%d\n%d\n", tabuleiro[6][6], tabuleiro[7][6], tabuleiro[8][6]);
    lin_nav_h = 4;
    col_nav_h = 4;
    lin_nav_v = 6;
    col_nav_v = 6;

    for(int c = col_nav_h, l = lin_nav_h; c < (col_nav_h + 3); c++){
        tabuleiro[l][c] = navio_horizontal[cont];
        cont++;
    }
    cont = 0;

    for(int l = lin_nav_v, c = col_nav_v; l < (lin_nav_v+3); l++){
        tabuleiro[l][c] = navio_vertical[cont];
        cont++;
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
    //printf("%d%d%d%d%d\n", tabuleiro[4][3], tabuleiro[4][4], tabuleiro[4][5], tabuleiro[4][6], tabuleiro[4][7]);
     //printf("%d\n%d\n%d\n%d\n%d", tabuleiro[5][6], tabuleiro[6][6], tabuleiro[7][6], tabuleiro[8][6], tabuleiro[9][6]);
     

    return 0;
}