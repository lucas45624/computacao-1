#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    int frequencia;


    printf ("digite a primeira nota:");
    scanf ("%f", &nota1);
    printf ("digite a segunda nota:");
    scanf ("%f", &nota2);
    printf("digite a terceira nota:");
    scanf ("%f", &nota3);

    printf ("digite a porcentagem de frequencia:");
    scanf ("%d%%", &frequencia);

    media = (nota1+nota2+nota3) /3 ;

    if(media >8.0 & frequencia>75)
        printf ("O estudante foi Aprovado Distinção pois teve media %.2f e frequencia %d%%.n", media, frequencia);

    else if(media >=6.0 & frequencia >75)
        printf ("O estudante foi Aprovado Direto pois teve media %.2f e frequencia %d%%.n", media, frequencia);

    else if ((media >=4.0 && frequencia >=75)||
            (media >=6.0 && frequencia <75)||
            (media >=4.0 && frequencia >50 && frequencia < 75))
        printf("O estudante vai para Final pois teve media %2f e frequencia %d%%.n", media,frequencia);

    else {

        printf ("O estudante foi Reprovado pois teve media %2f e frequencia %d%%.n", media,frequencia);

    }
     return 0;

}

