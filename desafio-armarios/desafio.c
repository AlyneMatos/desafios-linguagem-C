#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    unsigned char armarios = 0;
    int opcao;
    int armarioAleatorio;
    int desocupar;

    srand(time(NULL));

    printf("MENU: \n");
    printf("1. Ocupar armario.\n");
    printf("2. Liberar armario.\n");
    printf("3. Sair.\n");
    printf("Opção: ");
    scanf("%d",&opcao);

    while(opcao!=3){

        switch (opcao){

        case 1:
            if (armarios == 255) {
                printf("\nATENÇÃO: TODOS OS ARMÁRIOS ESTÃO OCUPADOS.\n");
            } else {
                do {
                    armarioAleatorio = rand() % 8;
                } while ((armarios >> armarioAleatorio) & 1); 
           
           armarios |= (1 << armarioAleatorio);
           printf("--------- Número do armário ocupado: %d ---------\n", armarioAleatorio+1);
        }
           break;

       case 2:
           printf("Qual armário você deseja desocupar?\n");
           scanf("%d",&desocupar);

           if ((armarios >> desocupar-1) & 1) {
                armarios &= ~(1 << desocupar-1);
                printf("-------- Voce desocupou o armário %d. --------\n", desocupar);
            } else {
                printf("-------- ARMÁRIO %d JÁ ESTÁ LIVRE. TENTE NOVAMENTE! -------\n", desocupar);
            }

           break;

       case 3:
           printf("Saindo...\n");
       break;
  
       default:
           printf("DIGITE UMA OPÇÃO VALIDA!\n\n");
        break;
   }
    
    printf("\n==================================\n");
    printf("\nArmários Ocupados na Universidade: \n\n");
    
    for (int i = 7; i >= 0; i--) {
        if ((armarios >> i) & 1) {
            printf("Armário %d: Ocupado (1)\n", i + 1);
        } else {
            printf("Armário %d: Desocupado (0)\n", i + 1);
        }
    }
    printf("\n==================================\n");

    printf("\nMENU: \n");
    printf("1. Ocupar armário.\n");
    printf("2. Liberar armário.\n");
    printf("3. Sair.\n");
    printf("Opção: ");
    scanf("%d",&opcao);
   }
}
