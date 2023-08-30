#include <stdio.h>
#include <math.h>
int main(void) {
  float x1,x2,y1,y2;
 
  printf("Valor para coordenada x: \n");
  scanf("%f",&x1);
  scanf("%f",&x2);
  printf("Valor para coordenada y: \n");
  scanf("%f",&y1);
  scanf("%f",&y2);
 
  float d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

  printf("%.2f", d);
 
  return 0;
}
