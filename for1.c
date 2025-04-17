#include <stdio.h>

int main() {
    int n;


    printf("Digite um valor inteiro n: ");
    scanf("%d", &n);


    for (int i = 1; i <= 200; i++) {

        if (i % n == 3 && i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
