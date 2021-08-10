#include <iostream>

main(){
    // variáveis
    float capital, taxa, periodo, juros;

    // entrada de dados
    printf(" Qual o capital? ");
    scanf("%f", &capital);

    printf(" Qual a taxa? ");
    scanf("%f", &taxa);

    printf(" Qual o periodo? ");
    scanf("%f", &periodo);

    juros = capital * (taxa / 100) * periodo;

    printf(" O valor do juros e: %2.f", juros);
}
