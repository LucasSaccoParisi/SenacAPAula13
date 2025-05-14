// 1 - Crie uma matriz 3x3 de números inteiros, associe o valor 9 ao elemento central desta matriz. Exiba a matriz na tela de forma adequada.

#include <stdio.h>

int main(){
    int m[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            m[i][j] = 9;
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

// Resultado:

// 9 9 9 
// 9 9 9 
// 9 9 9 
