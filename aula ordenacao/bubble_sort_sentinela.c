#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


void trocar(int v[], int i, int j) {
  int tmp = v[i];
  v[i] = v[j];
  v[j] = tmp;
}

void gerar_numeros(int v[], int n) {
    srand(time(NULL));
    int i;
    int a = rand() % 3 + 1;
    int b = rand() % 5 + 1;
    for (i = 0; i < n; i++) v[i] = i * a + b;
    for (i = 0; i < n; i++) {
        int j = rand() % n;
        trocar(v, i, j);
    }

}

void imprimir_indices(int n) {
  int i;
  for (i = 0; i < n; i++) printf(" %2d", i);
  printf("\n");
}

void imprimir_grid(int n) {
  int i;
  for (i = 0; i < n; i++) printf("+--");
  printf("+\n");
}

void imprimir(int v[], int n) {
  int i;
  printf("\n");
  imprimir_indices(n);
  imprimir_grid(n);
  for (i = 0; i < n; i++) {
    printf("|%2d", v[i]);
  }
  printf("|\n");
  imprimir_grid(n);
  printf("\n");
}


void bubble_sort_sentinela(int v[], int n) {
    int i, contador, cont=0;
    // repetir (n – 1) vezes
    for (contador = 1; contador <= n-1; contador++) {
        bool sentinela = false;
        // percorrer o vetor
        for (i = 0; i < n-1; i++) {
            
            // se elemento atual for maior que o próximo
            if (v[i] > v[i+1]) {
                // troca os elementos entre as 2 posições
                trocar(v, i, i+1);
                sentinela = true;
                cont++;
            }
        }
        if (!sentinela) {break;}
    }
    printf("|Contador de iterações: %d\n", cont);
}


void gerar_crescente(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = i;  // Vetor crescente: 0, 1, 2, ..., n-1
    }
}

void gerar_decrescente(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = n - 1 - i;  // Vetor decrescente: n-1, n-2, ..., 0
    }
}

int main(void) {
    int n;
    int cont = 0;
    printf("|informe o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    int v1[n];
    int v2[n];

    printf("|gerando vetor...|");
    gerar_numeros(v,n);
    //imprimir(v,n);

    printf("\n\n");

    printf("|Ordenando vetor aleatório|\n");
    bubble_sort_sentinela(v,n); //bubble sort sem sentinela

    printf("\n\n");

    gerar_crescente(v1,n);
    bubble_sort_sentinela(v1,n); //ordenando um vetor ja ordenado em ordem crescente
    printf("|Vetor ordenado em ordem crescente|\n");
    //imprimir(v,n);

    printf("\n\n");

   
    gerar_decrescente(v2,n); //bubble sort sem sentinela
    bubble_sort_sentinela(v2,n);
    printf("Vetor ordenado em ordem decrescente\n");
    //imprimir(v,n);

    printf("\n\n");
    //imprimir(v,n);

}