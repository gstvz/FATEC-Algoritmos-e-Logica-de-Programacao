#include <iostream>
 
using namespace std;
 
int main() {

	int N, notasCem, notasCinquenta, notasVinte, notasDez, notasCinco, notasDois, notasUm;
	scanf("%d", &N);
	notasCem = N / 100;
	notasCinquenta = (N - (notasCem * 100)) / 50;
	notasVinte = (N - (notasCem * 100) - (notasCinquenta * 50)) / 20;
	notasDez = (N - (notasCem * 100) - (notasCinquenta * 50) - (notasVinte * 20)) / 10;
	notasCinco = (N - (notasCem * 100) - (notasCinquenta * 50) - (notasVinte * 20) - (notasDez * 10)) / 5;
	notasDois = (N - (notasCem * 100) - (notasCinquenta * 50) - (notasVinte * 20) - (notasDez * 10) - (notasCinco * 5)) / 2;
	notasUm = (N - (notasCem * 100) - (notasCinquenta * 50) - (notasVinte * 20) - (notasDez * 10) - (notasCinco * 5) - (notasDois * 2)) / 1;
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", N, notasCem, notasCinquenta, notasVinte, notasDez, notasCinco, notasDois, notasUm);
 	
    return 0;
}
