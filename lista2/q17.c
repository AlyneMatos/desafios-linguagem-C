/*Elaborar um programa que apresente os valores de convers ̃ao de graus Celsius em graus Fahrenheit,
de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
 programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a f ́ormula de convers ̃ao.*/
 #include <stdio.h>
 int main(){
  int c,f;

  for(c=10;c<=100;c+=10){
    f = (c * 9.0 / 5.0) + 32.0;
    printf("Celsus: %d\n",c);
    printf("Fahrenheit: %d\n",f);
  }

  return 0;
 }
