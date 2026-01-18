#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//VAMOS COMEÇAR A TRABALHAR COM ARRAYS EM C!
//DESSA VEZ, IREMOS CRIAR UMA CALCULADORA DE MÉDIA ARITMÉTICA USANDO VETORES!

//PROGRAMA FEITO NO BLOCO MAIN PRINCIPAL!

int main(){
    setlocale(LC_ALL, "Portuguese");
    float TotalDeNotas[3];
    printf("Olá, bem-vindo à simples calculadora de médias em C, digite apenas valores de 1 até 10 e inteiros!\n");

    printf("Introduza a primeira nota:\n");

    //VERIFICAÇÃO 1 DE ENTRADA DE DADOS!

    if(scanf("%f", &TotalDeNotas[0]) != 1 || TotalDeNotas[0] > 10){
        printf("O valor é inválido, o programa será encerrado!\n");
        exit(EXIT_FAILURE);

    };

    printf("Excelente, valor armazenado, agora digite a segunda nota:");
    
    //VERIFICAÇÃO 2 DE ENTRADA DE DADOS!
   
    if(scanf("%f", &TotalDeNotas[1]) != 1 || TotalDeNotas[1] > 10){
        
        printf("O valor é inválido, o programa será encerrado!\n");
        exit(EXIT_FAILURE);

    };

    //VERIFICAÇÃO 3 DE ENTRADA DE DADOS!

    printf("Ok, confirme o valor, ou digite outro se desejar.\n");
    if(scanf("%f", &TotalDeNotas[2] ) != 1 || TotalDeNotas[2] > 10){
        printf("O valor é inválido, o programa será encerrado!\n");
        exit(EXIT_FAILURE);
    }
    TotalDeNotas[2] = (TotalDeNotas[0] + TotalDeNotas[1])/2;
    printf("A sua média aritmética é %.2f\n", TotalDeNotas[2]);



}
