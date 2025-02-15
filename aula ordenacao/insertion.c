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

void insertion_sort(int v[], int n) {
    int i, cont=0;
    // para cada posição do vetor (1o percurso)
    for (i = 1; i < n; i++) {
      // guardar elemento
      int elemento = v[i];
      int j = i - 1;
      bool encontrou = false;
      // percorrer no sentido inverso enquanto não chegar ao início do vetor e não encontrar um menor
      while (j >= 0 && !encontrou) {
        cont++;
        // se o elemento do 2o. percurso for maior
        if (v[j] > elemento) {
          // deslocar elemento do 2o. percurso para a direita
          v[j+1] = v[j];
          // continuar procurando
          j--;
        }
        // se o elemento do 2o. percurso for menor encontramos a posição
        else encontrou = true;
      }
      // inserir elemento na posição encontrada
      v[j+1] = elemento;
    }
    printf("|contador de iterações: %d\n", cont);
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

    printf("|---Inserction sort---|\n\n");
    printf("Ordenando vetor aleatorio\n");
    gerar_numeros(v,n);
    insertion_sort(v,n);  //trocar os nomes das funcoes e acrescentar a funcao de inserction sort
    //imprimir(v,n);

    printf("\n\n");

    printf("|Ordenando vetor Crescente\n");
    gerar_crescente(v, n);
    insertion_sort(v,n);

    printf("\n\n");

    printf("|Ordenando vetor decrescente\n");
    gerar_decrescente(v, n);
    insertion_sort(v,n);


    printf("\n\n");

     //printf("---------------------------------------------------------------------------");



}