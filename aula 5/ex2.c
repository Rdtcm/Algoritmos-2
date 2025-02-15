# include <stdio.h>

void trocar_numeros(int valores[], int n){
    int i,c, new_vet[n];
    for (i=0; i < n; i++){ 
        int temp = valores[i];
        new_vet[i] = valores[n -i -1]; //trocando os valores
        
    } 
    for (c=0; c < n; c++){
        printf("%d", new_vet[c]);//printando o vetor trocado
    } printf("\n");
}

int main(){
   int numeros[5] = {4,5,3,2,1};
   int tamanho_vetor = 5;
   trocar_numeros(numeros, tamanho_vetor);
}