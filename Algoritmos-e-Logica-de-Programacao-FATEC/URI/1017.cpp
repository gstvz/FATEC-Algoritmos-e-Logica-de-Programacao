#include <iostream>
 
using namespace std;
 
int main() {

	int tempo, velocidade;
	double gasto = 12;
	double litros;
	scanf("%d %d", &tempo, &velocidade);
	litros = (tempo * velocidade) / gasto;
	printf("%.3lf\n", litros);
 	
    return 0;
}
