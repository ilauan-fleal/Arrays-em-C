#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//VAMOS COMEÇAR A TRABALHAR COM ARRAYS EM C!

void RecebeEprocessaArray(){

    setlocale(LC_ALL, "Portuguese");
    int contador, indice;
    int number[10];
    //PRIMEIRO LAÇO FOR!
    
    for(contador=1; contador <= 10; contador++){
        printf("Entre com um determinado número %d:", contador);

        //VERIFICANDO ENTRADA DE DADO POR PARTE DO USUÁRIO!

        if(scanf("%d", &number[contador]) != 1){
            printf("Esse dado é inválido, programa encerrado!\n");
            exit(EXIT_FAILURE);


        };


    }

    //SEGUNDO LAÇO FOR!

    for(indice=1;indice <= 10;indice++){
        
        //indice + 1 --> Pois, na programação, contamos a partir do 0!

        printf("Número %d = %d\n", indice , number[indice]);


    }



}





int main(){
    RecebeEprocessaArray();


}