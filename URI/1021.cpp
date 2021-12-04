#include <iostream>
 
using namespace std;
 
int main() {

	double N, moedas;
	int notasCem, notasCinquenta, notasVinte, notasDez, notasCinco, notasDois, moedasUmReal, moedasCinquenta, moedasVinteECinco, moedasDez, moedasCinco, moedasUmCentavo;
	scanf("%lf", &N);
	notasCem = N / 100;
	notasCinquenta = (N - (notasCem * 100)) / 50;
	notasVinte = (N - (notasCem * 100) - (notasCinquenta * 50)) / 20;
	notasDez = (N - (notasCem * 100) - (notasCinquenta * 50) - (notasVinte * 20)) / 10;
	notasCinco = (N - (notasCem * 100) - (notasCinquenta * 50) - (notasVinte * 20) - (notasDez * 10)) / 5;
	notasDois = (N - (notasCem * 100) - (notasCinquenta * 50) - (notasVinte * 20) - (notasDez * 10) - (notasCinco * 5)) / 2;	
	moedas = (N - (notasCem * 100) - (notasCinquenta * 50) - (notasVinte * 20) - (notasDez * 10) - (notasCinco * 5) - notasDois * 2);
	moedasUmReal = moedas / 1;
	moedasCinquenta = ((moedas - moedasUmReal) * 100) / 50;
	moedasVinteECinco = (((moedas - moedasUmReal) * 100) - (moedasCinquenta * 50)) / 25;
	moedasDez = (((moedas - moedasUmReal) * 100) - (moedasCinquenta * 50) - (moedasVinteECinco * 25)) / 10;
	moedasCinco = (((moedas - moedasUmReal) * 100) - (moedasCinquenta * 50) - (moedasVinteECinco * 25) - (moedasDez * 10)) / 5;
	moedasUmCentavo = (((moedas - moedasUmReal) * 100) - (moedasCinquenta * 50) - (moedasVinteECinco * 25) - (moedasDez * 10) - (moedasCinco * 5)) / 1;
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", notasCem, notasCinquenta, notasVinte, notasDez, notasCinco, notasDois);
	printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", moedasUmReal, moedasCinquenta, moedasVinteECinco, moedasDez, moedasCinco, moedasUmCentavo);

    return 0;
}
