#include <iostream>

int main(){
    // variáveis
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

    // fórmula de processamento
    valorTotal = (distancia * valorLitro) / desempenho + pedagio;

    // saída de dados
    printf(" O valor total da viagem de ida: %.2f \n", valorTotal);
    printf(" O valor total da viagem de ida e volta: %.2f", valorTotal * 2);
}
