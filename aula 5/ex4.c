//objetivo: pegar os valores que tem no vetor a mas nao tem no vetor b
#include <stdio.h>

void ordenar_vetores(int vetor[], int n){
    int i, aux, flag;
    flag = 1;
    do{
        flag = 0;
        for (i=0;i < n-1; i++){
            if (vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                flag = 1;
            }
        }
    }
    while(flag);
}

void diferenca_vetores(int vetora[5], int vetorb[4]){
    ordenar_vetores(vetora, 5);
    ordenar_vetores(vetorb, 4);
    int k, j;
    for (k=0; k < 5; k++){
        int encontrar = 0;
        for (j=0; j < 4; j++){
            if (vetora[k] == vetorb[j]){
                encontrar = 1;
                break;
            }
        }
        if (!encontrar){ // variavel encontrar serve para mostrar se um valor foi encontrado no vetor a e no vetor b, para nao imprimir vetores que estao em a e em b
             printf("%d ", vetora[k]);
        }
    }
    printf("\n");
}

int main(){
    int veta[5] = {7,2,5,8,4}; //24578
    int vetb[4] = {4,2,9,5};  //2459
    diferenca_vetores(veta, vetb);
    return 0;
}

