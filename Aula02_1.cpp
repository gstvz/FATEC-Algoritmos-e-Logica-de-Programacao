#include <iostream>

int main(){
    // vari�veis
    float distancia, valorLitro, pedagio, desempenho, valorTotal;

    // entrada de dados
    printf(" Qual a distancia? ");
    scanf("%f", &distancia);

    printf(" Qual o valor do litro? ");
    scanf("%f", &valorLitro);

    printf(" Qual o valor do pedagio? ");
    scanf("%f", &pedagio);

    printf(" Quantos km por litro? ");
    scanf("%f", &desempenho);

    // f�rmula de processamento
    valorTotal = (distancia * valorLitro) / desempenho + pedagio;

    // sa�da de dados
    printf(" O valor total da viagem de ida: %.2f \n", valorTotal);
    printf(" O valor total da viagem de ida e volta: %.2f", valorTotal * 2);
}
