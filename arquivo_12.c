#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define DIM 10 //DEFININDO VALOR CTE.

void GerarValorAleatorio(int palpite,int number[]){
    
    

    srand((unsigned)time(NULL));
    for(int i = 0; i < 10; i++){
        number[i] = rand() % 100;
        printf("%d-", number[i]);
    }

    for(int i = 0; i < 10; i++){
        if(palpite == number[i]){
            printf("O valor %d está presente no array e sua posição é %d\n", palpite, i + 1);
            break;
        }
        else{
            printf("\nO valor não está presente no array!\n");
            exit(EXIT_FAILURE);
        }
    }


}




int main(){
    setlocale(LC_ALL, "Portuguese");
    int palpite;
    int number[DIM];
    
    printf("Olá, digite um valor de 0 até 100!\n");
    if(scanf("%d", &palpite) != 1){
        printf("Dado inválido, programa encerrado!\n");
        exit(EXIT_FAILURE);
    }
    //CHAMADA DA FUNÇÃO!
    GerarValorAleatorio(palpite ,number);




}