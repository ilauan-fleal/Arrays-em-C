#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define DIM 10 //DEFININDO VALOR CTE.


void CalculaTermosDePa(int number[]){
    setlocale(LC_ALL, "Portuguese");
    int a1, r1,  n = 1;
    printf("Digite o primeiro termo da P.A.(só serão aceitos valores inteiros de 1 até 10):\n");
    //VALIDAÇÃO DE ENTRADA DE DADO!
    if(scanf("%d", &a1) != 1 || a1 > 10){
        printf("Erro valor inválido, o dado digitado deve ser do tipo inteiro!\n");
        exit(EXIT_FAILURE);
    }
    printf("Digite o valor da razão da P.A(só serão aceitos valores inteiros de 1 até 10):\n");
    //SEGUNDA VALIDAÇÃO DE ENTRADA DE DADO
    if(scanf("%d", &r1) != 1 || r1 > 10){
        printf("Erro, valor inválido, o dado digitado deve ser do tipo inteiro!\n");
        exit(EXIT_FAILURE);
    }
    //LOOP WHILE!
    while(n <= 10){
        number[n] = a1 + (n - 1)*r1;
        printf("ElEMENTO DA P.A %d = %d\n", n , number[n]);        
        n++;
    }
    

}


int main(){
    int number[DIM];
    CalculaTermosDePa(number);


}