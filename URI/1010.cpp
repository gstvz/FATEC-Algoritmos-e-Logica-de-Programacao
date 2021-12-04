#include <iostream>
 
using namespace std;
 
int main() {

	int CODIGOP1, NUMEROP1, CODIGOP2, NUMEROP2;
	double VALORP1, VALORP2, TOTAL;
	scanf("%d %d %lf", &CODIGOP1, &NUMEROP1, &VALORP1);
	scanf("%d %d %lf", &CODIGOP2, &NUMEROP2, &VALORP2);
	TOTAL = (NUMEROP1 * VALORP1) + (NUMEROP2 * VALORP2);
	printf("VALOR A PAGAR: R$ %.2lf\n", TOTAL);
	
	return 0;
}
