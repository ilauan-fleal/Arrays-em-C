#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#define DIM 3 // AQUI UM VALOR CONSTANTE É DEFINIDO

//DEFININDO CTE, PARA DIMENSÕES DO TABULEIRO(3 X 3).

//ELABORANDO UM JOGO DA VELHA EM C!

//PRIMEIRAMENTE, DEVE-SE CRIAR UMA FUNÇÃO, PARA EXIBIR O TABULEIRO!

//DECLARANDO FUNÇÕES NO ESCOPO DO CÓDIGO(UMA BOA PRÁTICA).

void ImprimirTabuleiro(char matriz[][DIM]);
void DeixarTabuleiroVazio(char matriz[][DIM]);
void IndicaVencedor(int venceu, char player);

//AQUI, TEM-SE UMA FUNÇÃO PARA IMPRIMIR O TABULEIRO, QUE IRÁ RECEBER COMO PARÂMETRO A MATRIZ

void ImprimirTabuleiro(char matriz[][DIM]){
    system("cls"); //LIMPAR DADOS
    printf("%c  | %c | %c\n", matriz[0][0], matriz[0][1], matriz[0][2]);
    printf("---+---+---\n");
    printf("%c  | %c | %c\n", matriz[1][0], matriz[1][1], matriz[1][2]);
    printf("---+---+---\n");
    printf("%c  | %c | %c\n", matriz[2][0], matriz[2][1], matriz[2][2]);



}

//AQUI , DEVERÁ SER CRIADA UMA FUNÇÃO, PARA DEIXAR O TABULEIRO VAZIO!

void DeixarTabuleiroVazio(char matriz[][DIM]){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matriz[i][j] = ' ';
        }
    }

}

//FUNÇÃO PARA DETERMINAR O VENCEDOR!

void IndicaVencedor(int venceu, char player){
    if(venceu == 0){
        printf("Deu velha, não houve vencedor!\n");
    }
    else{
        printf("O vencedor foi o jogador %c\n", player);
    }
}

//BLOCO MAIN PRINCIPAL

int main(){
    setlocale(LC_ALL, "Portuguese");
    char matriz[DIM][DIM], player;
    int i, j, rodada, venceu = 0;
    //PRIMEIRO O TABULEIRO DEVERÁ ESTAR VAZIO, PARA DEPOIS SER IMPRESSO!
    DeixarTabuleiroVazio(matriz);
    //AQUI O TABULEIRO SERÁ IMPRESSO VAZIO!
    ImprimirTabuleiro(matriz);
    
    //3 x 3 = 9 JOGADAS POSSÍVEIS NO TOTAL
    //LAÇO FOR, PARA GARANTIR O TOTAL DE 9 RODADAS SENDO REALIZADAS!
    //ESSE LAÇO FOR, DEVERÁ CONTER TODO O CÓDIGO, EXCETO A FUNÇÃO 'INDICA VENCEDOR'
    for(rodada = 1; rodada <= 9 && venceu == 0; rodada++){
        if(rodada % 2 == 1){
            player = 'X';

        }
        else{
            player = 'O';
        }
        //AQUI SERÁ INICIALIZADO O LAÇO DO/WHILE!
    do{
        

//VALIDANDO ENTRADA DE DADOS!
        printf("Digite o número da linha(1 até 3), na qual deseja colocar o jogador %c\n", player);
        //PRIMEIRA VALIDAÇÃO DE ENTRADA DE DADOS!
        if(scanf("%d", &i) != 1 || (i < 1 || i > 3)){
            printf("VALOR INVÁLIDO!\n");
            exit(EXIT_FAILURE);
        }
        //SEGUNDA VALIDAÇÃO DE ENTRADA DE DADOS!
        printf("Ok, dado registrado! Agora digite a coluna(1 até 3), para colocar o jogador %c\n", player);
        if(scanf("%d", &j) != 1 || (j < 1 || j  > 3)){
            printf("VALOR INVÁLIDO!\n");
            exit(EXIT_FAILURE);
        }
//ENQUANTO O TABULEIRO NÃO ESTIVER VAZIO, O JOGO DEVERÁ CONTINUAR!

    }while(matriz[i - 1][j - 1] != ' ');
//REGISTRO DE JOGADA, APÓS TER SIDO FEITA!
    
    matriz[i - 1][j - 1] = player;
    
//IMPRESSÃO DE TABULEIRO ATUALIZADO, APÓS O REGISTRO DE JOGADA!

    ImprimirTabuleiro(matriz);
//VERIFICA SE A LINHA DA JOGADA ESTÁ TODA PREENCHIDA!
    if(matriz[i-1][0] == matriz[i - 1][1] && matriz[i - 1][1] == matriz[i - 1][2]){
        venceu = 1;
    }
//VERIFICA SE A COLUNA DA JOGADA ESTÁ TODA PREENCHIDA!
    else if(matriz[0][j - 1] == matriz[1][j - 1] && matriz[1][j - 1] == matriz[2][j - 1]){
        venceu = 1;

    }
//VERIFICA SE A DIAGONAL PRINCIPAL ESTÁ TODA PREENCHIDA!
    else if(i == j && matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2]){
        venceu = 1;

    }
//DEFAULT:
    else{

//VERIFICA SE A DIAGONAL SECUNDÁRIA ESTÁ TODA PREENCHIDA!
        if(i + j == 4 && matriz[0][2] == matriz[1][1] && matriz[1][1] == matriz[2][0]){
            venceu = 1;
        }
    }
    
}

//OBS: Após venceu ser igual a 1, a execução do programa sai do looping for!

//CHAMADA DA FUNÇÃO, PARA INDICAR QUEM VENCEU, APÓS A VERIFICAÇÃO DAS CONDIÇÕES!

IndicaVencedor(venceu, player);
    
}