#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//IMPRIMINDO LETRAS DO ALFABETO USANDO ARRAY EM C!

int main(){


    char letras[26] = {'A','B', 'C', 'D', 'E',
    'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P','Q' ,'W', 'X', 'Y', 'Z'};
    for(int i = 0; i <= 26; i++){
        printf("%c\n", letras[i]);
    }
}