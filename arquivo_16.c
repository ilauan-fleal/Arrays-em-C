#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define DIM 4 //DEFININDO VALOR CTE.

//SERÃO 10 ITERAÇÕES NO TOTAL

//FUNÇÃO PARA RECEBER O ARRAY!

void ReceberArray(int number[]){
    setlocale(LC_ALL, "Portuguese");
    for(int i = 0; i < 4; i++){
        printf("INTRODUZA O ELEMENTO %d(APENAS VALORES DE 1 ATÉ 9 )\n", i + 1);
        //VALIDANDO ENTRADA DE DADO
        if(scanf("%d", &number[i]) != 1 || (number[i] > 9 || number[i] < 0)){
            printf("DADO INVÁLIDO OU REPETIDO!\n");
            exit(EXIT_FAILURE);

        }

    }
    
}

//FUNÇÃO PARA EXIBIR O ARRAY


//FUNÇÃO PARA COMPARAR VALORES DO ARRAY


//NOVA FUNÇÃO PARA COMPARAR VALORES DO ARRAY

void ComparaValores(int number[]){
    setlocale(LC_ALL, "Portuguese");
    int i = 4;
    while(i >= 0){

        if(number[i-1] == number[i-4] && number[i - 2] == number[i - 3]){
            printf("O valor inserido é um palíndromo!\n");
            break;
    }
        else{
            printf("O valor inserido não é um palíndromo!\n");
            break;
        }
        
        i--;

    }
    
}


//BLOCO MAIN

int main(){
    setlocale(LC_ALL, "Portuguese");
    int number[DIM];
    ReceberArray(number);
    ComparaValores(number);
    


}
