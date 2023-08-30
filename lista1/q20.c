#include <stdio.h>

int main(void) {
  int num;
 
  printf("Digite um número: \n");
  scanf("%d",&num);

  int d = num%2;
  
  switch(d){
	case 0:
  	printf("Numero par.");
	break;
	default:
  	printf("numero impar");
  }
  return 0;
}
