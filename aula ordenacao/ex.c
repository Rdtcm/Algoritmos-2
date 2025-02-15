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
        cont++;
        // inicializar o valor mínimo com o valor da posição atual
        int min = v[i];
        // percorrer cada uma das próximas posições do vetor (2º percurso)
        for (j = i + 1; j < n; j++) { 
            // se o elemento deste segundo percurso for menor que o mínimo
            if (v[j] < v[i]) { 
                // trocar os elementos entre as posições do 1º e 2º percursos
                trocar(v, i, j);
            }
        }
    }
    printf("|Contador de iterações: %d\n", cont);
}

void selection_sort_decrescente(int v[], int n) {
    int i, j, cont=0;
    // para cada posição do vetor (1º percurso)
    for (i = 0; i < n - 1; i++) {
        cont++;
        // inicializar o valor mínimo com o valor da posição atual
        int min = v[i];
        // percorrer cada uma das próximas posições do vetor (2º percurso)
        for (j = i + 1; j < n; j++) { 
            // se o elemento deste segundo percurso for menor que o mínimo
            if (v[j] > v[i]) { 
                // trocar os elementos entre as posições do 1º e 2º percursos
                trocar(v, i, j);
            }
        }
    }
    printf("|Contador de iterações: %d\n", cont);
}

void bubble_sort(int v[], int n) {
    int i, contador, cont=0;
    // repetir (n – 1) vezes
    for (contador = 1; contador <= n-1; contador++) {
        // percorrer o vetor
        for (i = 0; i < n-1; i++) {
            
            // se elemento atual for maior que o próximo
            if (v[i] > v[i+1]) {
                // troca os elementos entre as 2 posições
                trocar(v, i, i+1);
                cont++;
            }
        }
    }
    printf("|Contador de iterações: %d\n", cont);
}

void bubble_sort_decrescente(int v[], int n) {
    int i, contador, cont=0;
    // repetir (n – 1) vezes
    for (contador = 1; contador <= n-1; contador++) {
        // percorrer o vetor
        for (i = 0; i < n-1; i++) {
            
            // se elemento atual for maior que o próximo
            if (v[i] < v[i+1]) {
                // troca os elementos entre as 2 posições
                trocar(v, i, i+1);
                cont++;
            }
        }
    }
    printf("|Contador de iterações: %d\n", cont);
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
        if (!sentinela) {return;}
    }
    printf("|Contador de iterações: %d\n", cont);
}

void bubble_sort_sentinela_decrescente(int v[], int n) {
    int i, contador, cont=0;
    // repetir (n – 1) vezes
    for (contador = 1; contador <= n-1; contador++) {
        bool sentinela = false;
        // percorrer o vetor
        for (i = 0; i < n-1; i++) {
            
            // se elemento atual for maior que o próximo
            if (v[i] < v[i+1]) {
                // troca os elementos entre as 2 posições
                trocar(v, i, i+1);
                sentinela = true;
                cont++;
            }
        }
        if (!sentinela) {return;}
    }
    printf("|Contador de iterações: %d\n", cont);
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
    printf("%d", cont);
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

    /*printf("gerando vetor...\n\n");
    gerar_numeros(v,n);
    //imprimir(v,n);

    printf("\n\n");

    printf("Ordenando vetor aleatório");
    bubble_sort(v,n); //bubble sort sem sentinela

    bubble_sort(v,n); //ordenando um vetor ja ordenado em ordem crescente
    printf("Vetor ordenado em ordem crescente\n\n");
    //imprimir(v,n);

    printf("\n\n");

   
    bubble_sort_decrescente(v,n); //bubble sort sem sentinela
    bubble_sort(v,n);
    printf("Vetor ordenado em ordem decrescente\n\n");
    //imprimir(v,n);

    printf("\n\n");*/

     //printf("---------------------------------------------------------------------------");

    //fim do exercicio 1
    //comeco do eercicio 2

    /*printf("Vetor ordenado em ordem crescente\n\n");
    printf("Bubble_sort com sentinela\n\n");
    printf("Ordenando vetor aleatorio\n");
    gerar_numeros(v,n);
    bubble_sort_sentinela(v,n); //bubble sort sem sentinela
    //imprimir(v,n);

    printf("\n\n");

    printf("vetor inicial com elementos crescente\n\n");
    printf("Bubble_sort com sentinela\n\n");
    gerar_numeros(v,n);
    bubble_sort_sentinela(v,n);
    bubble_sort_sentinela(v,n);

    printf("\n\n");
    

    printf("Vetor ordenado em ordem decrescente\n\n");
    printf("Bubble_sort com sentinela\n\n");
    gerar_numeros(v,n);
    bubble_sort_sentinela_decrescente(v,n); //bubble sort sem sentinela
    bubble_sort_sentinela(v,n);*/
    //imprimir(v,n);

     //printf("---------------------------------------------------------------------------");

    /*printf("Selection sort \n\n");
    printf("Ordenando vetor aleatorio\n\n");
    gerar_numeros(v,n);
    selection_sort(v,n); 
    //imprimir(v,n);

    printf("\n\n");

    printf("vetor inicial com elementos crescente\n\n");
    printf("Selection sort\n\n");
    gerar_numeros(v,n);
    selection_sort(v,n);
    selection_sort(v,n);

    printf("\n\n");

    printf("Vetor ordenado em ordem decrescente\n\n");
    printf("Selection sort \n\n");
    gerar_numeros(v,n);
    selection_sort_decrescente(v,n); 
    selection_sort(v,n);


    printf("\n\n");*/

    //printf("---------------------------------------------------------------------------");

    printf("Inserction sort \n\n");
    printf("Ordenando vetor aleatorio\n\n");
    gerar_numeros(v,n);
    insertion_sort(v,n);  //trocar os nomes das funcoes e acrescentar a funcao de inserction sort
    //imprimir(v,n);

    printf("\n\n");

    printf("vetor inicial com elementos crescente\n\n");
    printf("Inserction sort\n\n");
    gerar_crescente(v, n);
    insertion_sort(v,n);

    printf("\n\n");

    printf("Vetor ordenado em ordem decrescente\n\n");
    printf("Inserction sort \n\n");
    gerar_decrescente(v, n);
    insertion_sort(v,n);


    printf("\n\n");

     //printf("---------------------------------------------------------------------------");



}