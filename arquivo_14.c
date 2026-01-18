#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#define DIM 1


//CRIANDO UM CÓDIGO EM C, PARA VERIFICAR SE UM NÚMERO DE 4 DÍGITOS É PALÍNDROMO!

//OU SEJA, SE LIDO DE TRÁS PARA FRENTE É O MESMO EX: 1221, 6666, 9999!

//DESSA VEZ, IREMOS FAZER O USO DE ARRAYS!

void VerificaNumeroPalindromo(int number1[], int number2[], int number3[], int number4[]){
    setlocale(LC_ALL, "Portuguese");
    if(number1[0] == number4[0] && number2[0] == number3[0]){
        printf("O valor %d%d%d%d é um número palíndromo!\n", number1[0], number2[0], number3[0], number4[0]);

    }
    else{
        printf("O valor %d%d%d%d não é um número palíndromo!\n", number1[0], number2[0], number3[0], number4[0]);
    }

}




int main(){
    int number1[DIM];
    int number2[DIM];
    int number3[DIM];
    int number4[DIM];
    setlocale(LC_ALL, "Portuguese");
    
    
    

    //VALIDANDO ENTRADA DE DADOS!
    printf("Insira um valor de 1 até 9:\n");

    if(scanf("%d", &number1[0]) != 1 || number1[0] > 9){

            printf("Valor inválido, ou memória excedida!\n");
            exit(EXIT_FAILURE);
    }
    printf("Perfeito, valor armazenado insira mais um valor de 1 até 9!\n");
    if(scanf("%d", &number2[0]) != 1 || number2[0] > 9){
        printf("Valor inválido , ou memória excedida!\n");
        exit(EXIT_FAILURE);
    }
    printf("Excelente, agora, digite um terceiro número de 1 até 9!\n");
    if(scanf("%d", &number3[0]) != 1 || number3[0] > 9){
        printf("Valor inválido!\n");
        exit(EXIT_FAILURE);
    }
    printf("Perfeito, agora, digite um quarto número de 1 até 9!\n");
    if(scanf("%d", &number4[0]) != 1 || number4[0] > 9){
        printf("Valor inválido!\n");
        exit(EXIT_FAILURE);
    }

    VerificaNumeroPalindromo(number1, number2, number3, number4);
}