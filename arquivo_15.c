#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

//AQUI SERÁ ESCRITO UM CÓDIGO EM C, PARA VERIFICAR SE UM NÚMERO É PALÍNDROMO EM TODAS AS CIRCUNSTÂNCIAS!!

//PRIMEIRO, A LÓGICA É OBSERVAR UM MODO DE INVERTER O NÚMERO RECEBIDO!!

//E APÓS ISSO, SERÁ VERIFICADO SE ELE É OU NÃO UM VALOR PALÍNDROMO!!


void VerificaNumeroPalindromo(int number){
    int auxiliar = number , reverso = 0;
    while(auxiliar != 0){
        // % indica o resto de uma divisão! Ex: 121 % 10  = 1
        reverso = reverso * 10 + auxiliar % 10;
        auxiliar = auxiliar / 10;

    }
    if(number == reverso){
        printf("O número reverso é %d!\n", reverso);
        printf("Como ele é igual ao número original, portanto é um número palíndromo!\n");
    }
    else{
        printf("O número reverso é %d!\n", reverso);
        printf("Como ele é diferente do número original, portanto ele não é um número palíndromo!\n");
    }





}



int main(){
    setlocale(LC_ALL, "Portuguese");
    int number;
    printf("Digite um determianado número natural:\n");
    
    //VALIDANDO ENTRADA DE DADOS!

    if(scanf("%d", &number) != 1){
        printf("VALOR INVÁLIDO, O PROGRAMA SERÁ ENCERRADO!\n");
    }

    //CHAMADA DA FUNÇÃO!
    VerificaNumeroPalindromo(number);




}