//Objetivo: imprimir a uniao entre os vetores a e b
// -- LOGICA : percorrer A e B, verificar se tem em A e em B, se nao tiver somar ao vetor A
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

void uniao_vetores(int veta[5], int vetb[4]){
    ordenar_vetores(veta, 5);
    ordenar_vetores(vetb, 4);
    intersecao_vetores(veta[5], vetb[4]);
    

}


int main(){
     int veta[5] = {7,2,5,8,4}; //24578
    int vetb[4] = {4,2,9,5};  //2459
    uniao_vetores(veta, vetb);
    return 0;
}