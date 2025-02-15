/*Escreva uma função que recebe dois vetores inteiros A[] e B[], em
seguida, a sua função imprime na tela os valores referentes à
INTERSECÇÃO entre os vetores, ou seja, os elementos em comum
entre os dois vetores. Considere que os vetores dados não possuem
valores duplicados e não estão ordenados.:*/

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

void intersecao_vetores(int vetora[5], int vetorb[4]){
    ordenar_vetores(vetora, 5);
    ordenar_vetores(vetorb, 4);
    int i, j;
    for (i=0; i < 5; i++){
        for (j=0; j < 4; j++){
            if (vetora[i] == vetorb[i]){
            printf("%d ", vetora[i]);
            break;
            }
        }
    }
    printf("\n");
}

int main(){
    int veta[5] = {7,2,5,8,4};
    int vetb[4] = {4,2,9,5};
    intersecao_vetores(veta, vetb);
    return 0;
}