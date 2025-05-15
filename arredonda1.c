#include <stdio.h>

int arredonda (float x) {
    int inteiro = (int)x;
    float decimal = x -inteiro;

    if(decimal >= 0.5|| decimal<= -0.5) {
        if(x> 0) {
            return inteiro +1;
        }else{
            return inteiro -1;
        }
    }
    return inteiro;
}
    int main() {
        float valor;

        printf("Digite um numero para redondar:");
        scanf("%f", &valor);

        printf("Valor arredondado: %d\n", arredonda(valor));

        return 0;
        }
