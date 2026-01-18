#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define DIM 10 //DEFININDO VALOR CTE.

//SERÃO 10 ITERAÇÕES NO TOTAL

//FUNÇÃO PARA RECEBER O ARRAY!

//É VÁLIDO DESTACAR QUE UM ARRAY DE 10 POSIÇÕES, POR EXEMPLO, TEM A CAPACIDADE DE ARMAZENAR 10 ELEMENTOS NO TOTAL!


void ReceberArray(int number[]){
    setlocale(LC_ALL, "Portuguese");
    for(int i = 0; i < 10; i++){
        printf("INTRODUZA O ELEMENTO %d(APENAS VALORES DE 1 ATÉ 9 )\n", i + 1);
        //VALIDANDO ENTRADA DE DADO
        if(scanf("%d", &number[i]) != 1 || (number[i] > 9 || number[i] < 0) ){
            printf("DADO INVÁLIDO OU REPETIDO!\n");
            exit(EXIT_FAILURE);

        }

    }
    
}

//FUNÇÃO PARA EXIBIR O ARRAY

void ExibirArray(int number[]){
    for(int i = 0; i < 10; i++){
        printf("ELEMENTO %d=%d\n", i + 1, number[i]);
    }
    
}

//FUNÇÃO PARA COMPARAR VALORES DO ARRAY

int ComparaValoresMaiores(int number[]){
    setlocale(LC_ALL, "Portuguese");
    int i = DIM;
    while(i >= 0){

        if(number[i-1] > number[i - 2]){

            return number[i - 1];
    
    }
        else if(number[i - 1] < number[i - 2]){
            return number[i - 2];
            
        }
        
        i--;

    }
    
}

//NOVA FUNÇÃO PARA COMPARAR VALORES DO ARRAY

int ComparaValoresMenores(int number[]){
    setlocale(LC_ALL, "Portuguese");
    int i = DIM;
    while(i >= 0){

        if(number[i-1] > number[i - 2]){

            return number[i - 2];
    }
        else if(number[i - 1] < number[i - 2]){
            return number[i - 1];
        }
        
        i--;

    }
    
}


//BLOCO MAIN

int main(){
    setlocale(LC_ALL, "Portuguese");
    int number[DIM];
    ReceberArray(number);
    ExibirArray(number);
    printf("O maior valor é %d\n", ComparaValoresMaiores(number));
    printf("O menor valor é %d\n", ComparaValoresMenores(number));


}
