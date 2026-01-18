#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//DEFININDO VALOR CONSTANTE
#define DIMENSAO 4

//AQUI IREMOS SOLICITAR AO USUÁRIO , PARA PREENCHER UMA MATRIZ 4 X 4!

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Olá, insira valores de 0 à 10, na matriz 4 x 4!\n");
    int matriz[DIMENSAO][DIMENSAO];
    int i, j;
    //LAÇO FOR ANINHADO!
    for(i = 0; i < DIMENSAO; i++){
        for(j = 0; j < DIMENSAO; j++){
            //i + 1 -> A contagem das linhas, para o computador, deverá começar a partir do zero! 
            //j + 1 -> A contagem das colunas, para o computador, deverá começar a patir do zero!
            printf("Elemento[%d][%d]\n", i + 1, j + 1);
            
            //VERIFICANDO ENTRADA DE DADO!
            
            if(scanf("%d", &matriz[i][j]) != 1 || matriz[i][j] > 10){
                printf("Dado inválido, programa encerrado!\n");
                exit(EXIT_FAILURE);

            }
        }
    }
    //IMPRIMINDO MATRIZ

    for(i = 0; i < DIMENSAO; i++){
        for(j = 0; j < DIMENSAO; j++){
            //IMPRESSÃO VERTICAL
            printf("%d\n", matriz[i][j]);
        }
    }
    



}
