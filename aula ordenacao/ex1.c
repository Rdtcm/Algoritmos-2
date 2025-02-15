#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void bubble_sort_sentinela(int vet[], int n) {
    int i, contador;
    // repetir (n – 1) vezes
    for (contador = 1; contador <= n-1; contador++) {
        bool sentinela = false;
        // percorrer o vetor
        for (i = 0; i < n-1; i++) {
            // se elemento atual for maior que o próximo
            if (vet[i] > vet[i+1]) {
                // troca os elementos entre as 2 posições
                char aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
                sentinela = true;
            }
        }
        if (!sentinela) return;
    }
}

void gerar_vetor(char vet[], int n) { 

    srand(time(0));

    for (int i=0; i<n; i++) {
        vet[i] = rand() % 10;
    }
    for (int j=0; j<n; j++) {
        printf(" %d ", vet[j]);
    }
}


int main () {

    //professor nao tinha visto que o codigo base para resolver o exercicio estava feito, por isso perdi muito tempo 
    //fazendo o que nao precisava e por este motivo tenho pouca coisa feita, no final da aula ainda estava tentando
    //preencher a tabela 1
    int n;
    printf("Digite o tamanho do vetor:");
    scanf("%d", &n);
    char vet[n];

    gerar_vetor(vet, n);

    printf("\n");

    bubble_sort_sentinela(vet, n);
    for (int l=0; l<n; l++) {
        printf(" %d ", vet[l]);
    }

    printf("\n");

    return 0;
}