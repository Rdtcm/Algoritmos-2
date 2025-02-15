#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//verificar se uma palavra é um palindromo
void inverter_string(char word[], char i_word[]) {
    char aux;
    int n = 0;
    int t = strlen(word);
    for (int i = t - 1; i >= 0; i--) {
        aux = word[i];
        i_word[n] = aux;
        n++;
    }
    i_word[n] = '\0'; //certificando que a string termina no /o
}

bool palindromo (char word[], char i_word[]) {
    int tamanho = strlen(word);
    bool resultado;
    for (int i = 0; i < tamanho; i++) {
        if (word[i] != i_word[i]) {
            printf("náo é um palindromo \n");
            resultado = false;
            printf("Valor booleano: %s\n", resultado ? "true" : "false");
            return false;
        }
        
           
    } 
    printf("é um palindromo \n");
    resultado = true;
    printf("Valor booleano: %s\n", resultado ? "true" : "false");
    return true;
}


int main () {
    char word[100];
    char i_word[100];
    
    printf("Digite a palavra: \n");
    scanf("%s", word);
    
    inverter_string(word, i_word);
    printf("Palavra invertida: %s\n", i_word);

    palindromo(word,i_word);
    return 0;
}