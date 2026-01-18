#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define DIM 4 //DEFININDO VALOR CTE.

//NESSE CÓDIGO VAMOS APRENDER A CRIAR CÓPIA DA MATRIZ!

//LEMBRANDO -> AO PASSAR UMA MATRIZ, PARA UMA FUNÇÃO, DEVE-SE COLOCAR O PRIMEIRO ESPAÇO COMO VAZIO!

//CRIANDO FUNÇÃO, PARA RECEBER DADOS!

//DECLARANDO FUNÇÕES NO ESCOPO DO CÓDIGO --> UMA BOA PRÁTICA!

void RecebeMatriz(int MatrizOriginal[][DIM]);
void CopiaMatriz(int MatrizCopiada[][DIM], int MatrizOriginal[][DIM]);
void DobrarMatriz(int Dobrado[][DIM], int Original[][DIM]);
void ExibirMatriz(int Matriz[][DIM]);

//CRIANDO FUNÇÃO PARA RECEBER MATRIZ!

void RecebeMatriz(int MatrizOriginal[][DIM]){
    setlocale(LC_ALL, "Portuguese");
    int i, j;
    printf("DIGITE APENAS VALORES DE 1 ATÉ 4!\n");
    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++){
            
            printf("DIGITE O ELEMENTO[%d][%d]:", i + 1, j + 1);
            //VERIFICANDO ENTRADA DE DADO!
            if(scanf("%d", &MatrizOriginal[i][j]) != 1 || ((MatrizOriginal[i][j] > 4) || (MatrizOriginal[i][j] < 0)) ){
                printf("ERRO DO VALOR DIGITADO!\n");
                exit(EXIT_FAILURE);
            }
        }
    }
}


//CRIANDO FUNÇÃO PARA COPIAR MATRIZ!

//Essa função irá receber como parâmetro , duas matrizes!

void CopiaMatriz(int MatrizCopiada[][DIM], int MatrizOriginal[][DIM]){
    int i, j;
    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++){
            MatrizCopiada[i][j] = MatrizOriginal[i][j];

        }
    }

}

//Essa função irá dobrar os elementos da matriz!

void DobrarMatriz(int Dobrado[][DIM], int Original[][DIM]){
    int i, j;
    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++){
            Dobrado[i][j] = 2 * Original[i][j];
        }
    }


}


//Essa função, deverá exibir os dados da matriz!

void ExibirMatriz(int Matriz[][DIM]){
    int i, j;
    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++){
            printf("%3d", Matriz[i][j]);
        }
        printf("\n");
    }


}

int main(){
    
    //REDECLARANDO MATRIZ NO BLOCO MAIN!

    int MatrizOriginal[DIM][DIM], MatrizCopiada[DIM][DIM], Dobrado[DIM][DIM];
    
    //CHAMADA DAS FUNÇÕES NO BLOCO MAIN!
    
    RecebeMatriz(MatrizOriginal);
    CopiaMatriz(MatrizCopiada, MatrizOriginal);
    DobrarMatriz(Dobrado, MatrizOriginal);

    //AQUI SERÁ CHAMADA A FUNÇÃO PARA EXIBIR A MATRIZ!

    printf("Exibindo valores da matriz original:\n");
    ExibirMatriz(MatrizOriginal);
    printf("Exibindo valores da matriz copiada:\n");
    ExibirMatriz(MatrizCopiada);
    printf("Exibindo valores da matriz dobrada:\n");
    ExibirMatriz(Dobrado);


    
}