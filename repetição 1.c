#include <stdio.h>

int main() {
    int numero;

    printf("Digite n�meros inteiros (digite um n�mero negativo para sair):\n");

    while (1) {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("N�mero negativo digitado. Encerrando o programa.\n");
            break; // Sai do loop
        }

        printf("Voc� digitou: %d\n", numero);
    }

    return 0;}

