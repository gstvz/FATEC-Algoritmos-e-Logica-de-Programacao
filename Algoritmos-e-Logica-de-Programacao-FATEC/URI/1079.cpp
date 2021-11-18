#include <iostream>
 
using namespace std;
 
int main() {
 
	int n, contador;
	double valor1, valor2, valor3, media;
	
	scanf("%d", &n);
	
	for(contador = 1; contador <= n; contador++) {
		scanf("%lf %lf %lf", &valor1, &valor2, &valor3);
		media = ((valor1 * 2) + (valor2 * 3) + (valor3 * 5)) / 10;
		printf("%.1lf\n", media);
	};
 
    return 0;
}
