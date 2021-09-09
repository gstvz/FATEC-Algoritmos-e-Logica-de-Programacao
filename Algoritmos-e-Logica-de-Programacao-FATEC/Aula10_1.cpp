#include <iostream>

int main() {
	double dinheiro;
	printf(" Quanto de dinheiro voce tem? \n");
	scanf("%lf", &dinheiro);
	
	if (dinheiro >= 10.00) {
		printf(" Vai ao cinema. \n");
	} else {
		printf(" Fique em casa. \n");
	}
}
