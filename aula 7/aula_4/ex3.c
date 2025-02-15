#include <stdio.h>
#include <stdlib.h>

int definir_horario(int h, int m, int hf, int mf){
    int horas = (hf*60) - (h*60);
    int min = mf - m; 
    if(min<=0 && horas<=0){
        min += 60;
    }
    int soma = horas+min;
    return soma; 

}

int main(){
    int h, m, hf, mf, soma;
    printf("Digite a hora e o minuto inicial no formato hh:mm\n");
    scanf("%d:%d", &h, &m);
    printf("Digite a hora e o minuto final no formato hh:mm\n");
    scanf("%d:%d", &hf, &mf);
    int dif = definir_horario( h, m, hf, mf);
    int horas = dif / 60;
    int minutos = dif % 60;
    printf("A diferenca de %d:%d e %d:%d é %d:%d\n", h,m,hf,mf,horas,minutos);
    
}