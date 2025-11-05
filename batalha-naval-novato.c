#include <stdio.h>

int main(){

    
    char *colunas[11] = {"  ", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"}; // VETOR PARA INFORMAR AS COLUNAS DO TABULEIRO
    int tabuleiro [10] [10]; // MATRIZ PARA INICIALIZAR O TABULEIRO 10X10
    int linha = 1; // VARIÁVEL PARA EXIBIR O NUMERO DA LINHA DO TABULEIRO
    int navio_azul [3][3], navio_vermelho[3][3]; // MATRIZ POSIÇÃO NAVIO
    int pos_navio_c = 0, pos_navio_l = 0;
    char posicao_navio_azul = 'v', poisicao_navio_vermelho = 'h';
    int l_az, c_az, l_vm, c_vm;

    for (int l = 0; l < 10; l++) { // INICIALIZANDO A MATRIZ DO TABULEIRO
        for (int c = 0; c < 10; c++) {
            tabuleiro[l][c] = 0;
        }
    
        }
        // inicializando a posição do navio azul
    if (posicao_navio_azul = 'v') {
        pos_navio_c = 1;
        for (l_az = 0, c_az = pos_navio_c; l_az < 3; l_az++) {
            //navio_azul[l_az][c_az] = 3;
            tabuleiro[l_az][c_az] = 3;
        }
    }
    else {
        pos_navio_l = 1;
        for (c_az = 0, l_az = pos_navio_l; c_az < 3; c_az++) {
            //navio_azul [l_az][c_az] = 3;
            tabuleiro[l_az][c_az] = 3;
        }

    }
    // inicializando a posição do navio vermelho
    if (poisicao_navio_vermelho = 'v') {
        pos_navio_c = 1;
        for (l_vm = 0, c_vm = pos_navio_c; l_vm < 3; l_vm++) {
            navio_azul[l_vm][c_vm] = 3;
            //printf("%d %d %d", navio_azul[l_az][c_az], navio_azul[l_az][c_az], navio_azul[l_az][c_az]);
        }
    }
    else {
        pos_navio_l = 1;
        for (c_vm = 0, l_vm = pos_navio_l; c_vm < 3; c_vm++) {
            navio_vermelho [l_vm][c_vm] = 3;
            //printf("%d %d %d", navio_azul[l_az][c_az], navio_azul[l_az][c_az], navio_azul[l_az][c_az]);
        }

    }

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