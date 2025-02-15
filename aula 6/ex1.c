#include <stdio.h>
#include <string.h>

int main () {
    char nome[100];
    
    printf("Digite um nome: \n");
    scanf("%s", nome);

    int tamanho_vet = strlen(nome);

    for (int i = tamanho_vet - 1; i >= 0; i--) {
        printf("%c", nome[i]);
    }
    printf("\n");
    return 0;
}