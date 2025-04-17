#include <stdio.h>

int main() {
    int numero;
    int positivos = 0;
    int soma = 0;

    printf("Digite n�meros inteiros (digite 1000 para encerrar):\n");

    while (1) {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);

        if (numero == 1000) {
            break; // Encerra o loop se o n�mero for 1000
        }

        if (numero > 0) {
            positivos++;
            soma += numero;
        }
    }

    printf("%d valores positivos foram digitados.\n", positivos);

    if (positivos > 0) {
        float media = (float)soma / positivos;
        printf("M�dia dos valores positivos: %.1f\n", media);
    } else {
        printf("Nenhum valor positivo foi digitado.\n");
    }

    return 0;
}
