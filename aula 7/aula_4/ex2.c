#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float area_esf(float r){
    float pi = 3.141592, a, ret;
    a = (4. * pi * (r*r));
    return a;
}

int main(){
    float r, area;
    printf("Digite o raio:\n\n");
    scanf("%f", &r);
    area = area_esf(r);
    printf("a area da esfera é: %.2f\n\n", area);
}