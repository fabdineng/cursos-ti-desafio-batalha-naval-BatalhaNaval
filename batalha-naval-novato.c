#include <stdio.h>

int main(){

    
// declarando variaveis
    char *colunas[11] = {" ", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    int tabuleiro [10] [10];
    int cont = 0; 
    int linha = 1;
    int col_nav_v, col_nav_h, lin_nav_v, lin_nav_h;

// atribuindo valores ao tabuleiro e navios
    for (int l = 0; l < 10; l++) {
        for (int c = 0; c < 10; c++) {
            tabuleiro[l][c] = 0;
        }
        
    }
    int navio_vertical[3] = {3, 3, 3};
    int navio_horizontal[3] = {3, 3, 3};

// determinando as posições dos navios
    lin_nav_h = 4;
    col_nav_h = 4;
    lin_nav_v = 6;
    col_nav_v = 6;

// inserindo as posições dos navios no tabuleiro
    for(int c = col_nav_h, l = lin_nav_h; c < (col_nav_h + 3); c++){
        tabuleiro[l][c] = navio_horizontal[cont];
        cont++;
    }
    cont = 0;

    for(int l = lin_nav_v, c = col_nav_v; l < (lin_nav_v + 3); l++){
        tabuleiro[l][c] = navio_vertical[cont];
        cont++;
    }

// imprimindo o tabuleiro com as posições dos navios
    printf("TABULEIRO BATALHA NAVAL \n\n");    
    printf("%s\t%s %s %s %s %s %s %s %s %s %s \n", colunas[0], colunas[1], colunas[2], colunas[3], colunas[4], colunas[5], colunas[6], colunas[7], colunas[8], colunas[9], colunas[10]);
       
    for (int l = 0; l < 10; l++) {
        printf("%d\t", linha);
        for (int c = 0; c < 10; c++) {
            printf("%d ", tabuleiro[l][c]);
        }
        
       
    linha += 1;
    printf("\n");
    }
    

    return 0;
}