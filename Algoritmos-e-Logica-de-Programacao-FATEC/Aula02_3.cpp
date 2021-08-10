#include <iostream>

main(){
    int lado, area, perimetro;

    printf(" Qual o valor do lado? ");
    scanf("%i", &lado);

    area = lado * lado;
    perimetro = 4 * lado;

    printf(" O valor da area e: %i \n", area);
    printf(" O valor do perimetro e: %i", perimetro);
}
