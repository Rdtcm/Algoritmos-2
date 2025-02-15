#include <stdio.h>
#include <stdlib.h>


float celsius_to_fahr(float c){
  float f;
  printf("digite a temperatura em celsius: \n");
  scanf("%f", &c);
  f = (c * 1.8)+32;
  return f;
}

int main(){
    float c,f;
    f = celsius_to_fahr(c);
     printf("a temperatura em farenheit é: %.2f\n", f);

}