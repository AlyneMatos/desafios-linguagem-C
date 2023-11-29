#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIM 5

void imprimir(int m[LIM][LIM], int l, int c){
    for (int i = 0; i < l; i++){
       for (int j = 0; j < c; j++){
         printf("%d  ",m[j][i]);
       }
       printf("\n");
    }
}
void calcularFiltroMedia(int m[LIM][LIM], int linha, int coluna){
    int metade = 3/2;
    int matrizFiltrada[LIM][LIM];

    for (int i = 0; i < LIM; i++){
        for (int j = 0; j < LIM; j++){
            int soma = 0; 
            for (int k = -metade; k <= metade; k++){ 
                for (int z = -metade; z <= metade; z++){
                    int linha = i+k; //0-1  0+0 0+1    0+0 0+0 0+1
                    int coluna = j+z; //0-1 0+0 0+1    0-1 0+0 0+1

                    if(linha<0 || coluna<0 || coluna>=LIM || linha>=LIM) continue;
                    if(linha == i && coluna == j) continue;

                    soma = soma + m[linha][coluna];
                    //printf("===%d %d - %d ===\n",i,j,m[linha][coluna]);
                }
            }
            soma = soma /((3*3)-1);
            matrizFiltrada[i][j] = soma;
               
            //printf("%d, %d = %d\n",i,j,soma);
            //printf("%d",ma[i][j]);
        }
    }

    printf("\n");
    imprimir(matrizFiltrada,LIM,LIM);
}

int main(){
    int matriz[LIM][LIM];

    for (int i = 0; i < LIM; i++){
       for (int j = 0; j < LIM; j++){
         matriz[i][j] = 1 + rand() % 9;
       }
    }

    imprimir(matriz,LIM,LIM);
    calcularFiltroMedia(matriz,LIM,LIM);
    
    return 0;
}
    // for (int i = 0; i < 5*5; i++){
    //     *(m[0]+i) = 1 + rand() % 9;     
        
    //     //printf("%lX\n",(long) m[0]+i);    
    // }