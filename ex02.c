// 2 - Crie uma matriz 10x10. Atribua o número 8 a todos os elementos da matriz. Atribua então o número 0 a um elemento randômico da matriz. Exiba a matriz na tela.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int m[10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            for(int x = 0; x < 1; x++){
            int numAlet = rand() % 10 + 1;
            m[i][j] = 8;
            m[numAlet][j] = 0;
            printf("%d ", m[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}

// Resultado:

// lucassaccoparisi@LaptopDoLucasFaculdade:~/programação/senacAP/aula13$ ./ex02
// 8 8 8 8 8 8 8 8 8 8 
// 8 8 8 8 8 8 8 8 8 8 
// 8 0 8 8 8 8 0 8 8 8 
// 8 8 8 8 8 0 8 8 8 8 
// 8 8 8 0 8 8 8 8 0 8 
// 8 8 8 8 8 8 8 8 0 0 
// 8 8 8 8 0 8 0 8 8 8 
// 8 0 8 0 8 8 0 8 8 8 
// 8 8 0 8 8 8 0 8 8 8 
// 8 8 8 8 8 8 8 0 8 8 

// lucassaccoparisi@LaptopDoLucasFaculdade:~/programação/senacAP/aula13$ ./ex02
// 8 8 8 8 8 8 8 8 8 8 
// 8 0 8 8 8 0 0 8 8 8 
// 8 8 0 8 8 8 8 8 8 8 
// 0 8 8 8 8 8 8 8 8 8 
// 8 8 0 0 8 8 0 8 8 8 
// 0 8 8 8 8 8 8 8 8 8 
// 8 8 8 8 8 8 8 8 0 0 
// 0 8 8 8 8 8 8 8 8 8 
// 8 8 8 8 8 8 8 8 8 8 
// 8 8 8 8 8 8 8 8 8 8 
