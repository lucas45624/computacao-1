#include <stdio.h>

int main() {
    int numero =1;

    printf("Digite números inteiros (digite um número negativo para sair):\n");

    while (numero > 0) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Número negativo digitado. Encerrando o programa.\n");
            break; // Sai do loop
        }

        printf("Você digitou: %d\n", numero);
    }

    return 0;
    }
