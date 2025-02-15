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




void selection_sort(int v[], int n) {
    int i, j, cont=0;
    // para cada posição do vetor (1º percurso)
    for (i = 0; i < n - 1; i++) {
        // inicializar o valor mínimo com o valor da posição atual
        int min = v[i];
        // percorrer cada uma das próximas posições do vetor (2º percurso)
        for (j = i + 1; j < n; j++) { 
            // se o elemento deste segundo percurso for menor que o mínimo
            if (v[j] < v[i]) { 
                cont++;
                // trocar os elementos entre as posições do 1º e 2º percursos
                trocar(v, i, j);
            }
        }
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

    printf("\n\n");
    printf("|---Selection sort---|\n\n");
    printf("Ordenando vetor aleatorio\n");
    gerar_numeros(v,n);
    selection_sort(v,n); 
    //imprimir(v,n);

    printf("\n\n");

    printf("|Ordenando vetor Crescente\n");
    gerar_crescente(v,n);
    selection_sort(v,n);

    printf("\n\n");

    printf("|Ordenando vetor decrescente\n");
    gerar_decrescente(v,n); 
    selection_sort(v,n);

    printf("\n--------------------------------------------------------------\n");

}