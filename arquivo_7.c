#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//PASSANDO VETORES , PARA FUNÇÕES , NA LINGUAGEM C!

//Como fazer isso?

float CalculaMedia(float numero[]){
    int contador;
    float media = 0.0;
    for(contador = 1;contador <5; contador++){
        media += numero[contador];
    }
    //RETORNO DA FUNÇÃO DO TIPO FLOAT!
    return media/(float)5;
}




int main(){
    setlocale(LC_ALL, "Portuguese");
    float number[5];
    printf("Olá, bem-vindo à nossa nova calculadora de média de notas!\n");
    printf("Você , deverá inserir, 5 valores de 1 até 10!\n");
    for(int delta=1; delta <= 5; delta++){
        printf("ENTRE COM O VALOR %d\n", delta);
        if(scanf("%f", &number[delta]) != 1 || (number[delta] > 10 || number[delta] < 0)){
            printf("DADO INVÁLIDO, PROGRAMA ENCERRADO!\n");
            exit(EXIT_FAILURE);

        }        

    }
    printf("O valor da média aritmética dos 5 números %.2f\n", CalculaMedia(number));
}


