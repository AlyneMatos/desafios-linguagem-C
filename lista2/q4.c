// Implementar um programa para resolver o seguinte problema: José tem 150 centı́metros e cresce 2
// centı́metros por ano. O Pedro tem 110 centı́metros e cresce 3 centı́metros por ano. Em quantos anos
// Pedro será maior que José?

#include <stdio.h>
int main(){
    int alturaJose = 150, alturaPedro = 110, ano=0;

    //opcao 1

    // for(ano=0;ano<100;ano++){
    //     alturaJose = 150 + 2*ano;
    //     alturaPedro = 110 + 3*ano;

    //     if(alturaPedro>alturaJose){
    //         printf("Pedro sera maior que jose em %d anos",ano);
    //         break;
    //     }
    // }
    // return 0;
    
    //opcao 2

    while (alturaPedro<alturaJose)
    {
        ano++;
        alturaJose = 150 + 2*ano;
        alturaPedro = 110 + 3*ano;
        
         printf("%d altura de Pedro: %d e altura de José: %d\n",ano,alturaPedro,alturaJose);
    }
    printf("Pedro sera maior que jose em %d anos",ano);
    
 return 0;
}
  
