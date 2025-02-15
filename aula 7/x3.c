#include <stdio.h>
#include <time.h> 
#include <stdlib.h>
#include <stdbool.h>

void gerar_vetor (int v[], int n) { srand(time(NULL));
    int r = rand();
    int inicial = 1;
    int sorteado;
    for(int i=0; i<n; i++) {
sorteado inicial+ rand() % (inicial*2);
v[i] sorteado;
}
        inicial sorteado + 1;
}
/*
Busca o elemento 'e' no vetor 'v', retornando o índice da posicao da primeira ocorrencia.
retorna -1 se o elemento nao esta presente no vetor.*/
int busca_binaria (int v[], int n, int e) {
    int indice_medio;
    int menor_indice = 0;
    int maior_indice = n - 1;
    while (maior_indice >= menor_indice) {
        indice_medio = (maior_indice + menor_indice)/2; if (v[indice_medio] == e)
        if (v[indice_medio] == e) {
            
        }    
            return indice_medio;
else    if (v[indice_medio] > e) maior_indice indice_medio
else
-
1;
menor_indice = indice_medio + 1;
    }
}

return -1;