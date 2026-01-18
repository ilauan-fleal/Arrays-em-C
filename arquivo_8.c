#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define DIM 4 //DEFININDO VALOR CTE.


//PASSANDO MATRIZES PARA FUNÇÕES EM C!!!   

//Como é possível fazer isso?

//O primeiro índice deve ser passado, de forma vazia, já o segundo, deve, obrigatoriamente
//estar preenchido.


//INICIALIZANDO FUNÇÃO PARA PREENCHER MATRIZ!


void PreencherMatriz(int Tabela[][DIM]){
    setlocale(LC_ALL, "Portuguese");
    //i -> Representam as linhas!
    //j -> Representam as colunas!
    
    int i , j;
    for(i = 0; i < DIM; i++){
        
        for(j = 0; j < DIM; j++){
            printf("ENTRE COM O ELEMENTO[%d][%d](somente valores de 1 até 4):", i + 1, j + 1);
            //VALIDANDO ENTRADA DE DADOS EM NOSSA MATRIZ!
            if(scanf("%d", &Tabela[i][j]) != 1 || ((Tabela[i][j] < 1) || (Tabela[i][j] > 4))){
                printf("O VALOR INSERIDO É INVÁLIDO...\n");
                printf("O PROGRAMA SERÁ ENCERRADO!\n");
                exit(EXIT_FAILURE);
            }

        }
    }

}

//FUNÇÃO PARA EXIBIR MATRIZ!



void ExibirMatriz(int Tabela[][DIM]){
    setlocale(LC_ALL, "Portuguese");
    int i, j;
    for(i = 1; i < DIM; i++){
        for(j = 1; j < DIM; j++){
            printf("%3d", Tabela[i][j]);
            
            }
        printf("\n");
        }
    
    }

//FUNÇÃO PARA EXIBIR TRAÇO!!

int Traco(int Tabela[][DIM]){
    setlocale(LC_ALL, "Portuguese");
    int contador, traco = 0;
    for(contador = 0; contador < DIM; contador++){
        traco += Tabela[contador][contador];

    }
    return traco;


}



//BLOCO MAIN DA FUNÇÃO!

int main(){
    int Tabela[DIM][DIM]; //DECLARANDO MATRIZ NO BLOCO MAIN PRINCIPAL!
    PreencherMatriz(Tabela); // PARA CHAMAR A MATRIZ NA FUNÇÃO, BASTA PASSAR A MATRIZ SEM OS ÍNDICES DE LINHA E COLUNA
    ExibirMatriz(Tabela); 
    Traco(Tabela);
    printf("A soma dos elementos da diagonal principal é %d\n", Traco(Tabela) - 1);

}
