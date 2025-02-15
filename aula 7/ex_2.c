
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void gerar_vetor (int v[], int n) {
    srand(time(NULL));
    int r = rand();
    for(int i=0; i<n; i++) {
        v[i]= 1 + rand() % (n*2);
        }
    }

int contador(int v[], int n, int e) {
    int i;
    int contador = 0;
    for (int i=0; i<n; i++) {
        contador += 1;
        if(v[i]== e) {
            return contador;
        }
        
    }

    printf("O codigo nao rodou nenhuma vez!\n");
    return contador;
    } 

    int busca_linear(int v[], int n, int e) {
    int i;
    for (int i=0; i<n; i++) {
        if(v[i]== e) {
            return i;
        }
    }
    return -1;
    }


void imprimir (int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf(" %d ", v[i]);
    }
    printf("\n");
}

int main () {
    int n = 10;
    int vetor[10];
    bool sair = false;
    int op;

    gerar_vetor(vetor, n);

    while (!sair) {
        printf("## dados: ");
        imprimir(vetor, n);

        printf("\n");
        printf("Elemento a ser buscado de forma linear ou -1 para sair: ");
        scanf("%d", &op);

        if (op == -1) {
            sair = true;
        } else {
            int cont = contador(vetor, n, op);
            printf("Contador: %d\n\n", cont);

            int indice = busca_linear(vetor, n, op);
            printf("Posicao em que o elemento foi encontrado: %d", indice);
        }
        printf("\n##Fim\n");
    }
}