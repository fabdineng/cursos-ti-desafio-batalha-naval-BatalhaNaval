#include <stdio.h>

int main(){

    
// declarando variaveis
    char *colunas[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    int tabuleiro [10] [10];
    int cont = 0; 
    int linha = 1;
    int col_nav_v, col_nav_h, lin_nav_v, lin_nav_h;
    int col_nav1_diag, lin_nav1_diag, lin_nav2_diag, col_nav2_diag;
    int mat_hab_cone[5][5], mat_hab_cruz[3][3], mat_hab_octa[5][5];
    int lin_cone, col_cone, lin_cruz, col_cruz, lin_octa, col_octa;

// atribuindo valores ao tabuleiro e navios
    for (int l = 0; l < 10; l++) {
        for (int c = 0; c < 10; c++) {
            tabuleiro[l][c] = 0;
        }   
    }
    int navio_vertical[3] = {3, 3, 3};
    int navio_horizontal[3] = {3, 3, 3};
    int navio_diagonal[3] = {3, 3, 3};

    for (int l = 0; l < 5; l++){
        for (int c = 0; c < 5; c++){
            if (l == 1 && c == 2){
                mat_hab_cone[l][c] = 5;
            } else if (l == 2 && 1 <= c && c <= 3){
                mat_hab_cone[l][c] = 5;
            }else if (l == 3 && 0 <= c && c <= 4){
                mat_hab_cone[l][c] = 5;
            }else {
                mat_hab_cone[l][c] = 0;
            }
        }
    }
for (int l = 0; l < 5; l++){
    for(int c = 0; c < 5; c++){
        printf("%d", mat_hab_cone[l][c]);
    }
    printf("\n");
}
// determinando as posições dos navios
    lin_nav_h = 4;
    col_nav_h = 4;
    lin_nav_v = 6;
    col_nav_v = 6;
    lin_nav1_diag = 6;
    col_nav1_diag = 1;
    lin_nav2_diag = 1;
    col_nav2_diag = 6;

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
    cont=0;
    for(int l = lin_nav1_diag, c = col_nav1_diag; l < (lin_nav1_diag + 3); l++, c++){
        tabuleiro[l][c] = navio_diagonal[cont];
        cont++;
    }
    cont=0;
   
    for(int l = lin_nav2_diag, c = col_nav2_diag; l < (lin_nav2_diag + 3); l++, c++){
        tabuleiro[l][c] = navio_diagonal[cont];
        cont++;
    }

// imprimindo o tabuleiro com as posições dos navios
    printf("TABULEIRO BATALHA NAVAL \n\n");    
    printf("\t"); 
    for(int i = 0; i < 10; i++){
        printf("%s ", colunas[i]);
     }
     printf("\n"); 
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