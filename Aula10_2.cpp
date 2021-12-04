#include <iostream>

int main() {
	int n1, n2, quociente;
	printf(" Insira o dividendo: \n");
	scanf("%d", &n1);
	printf(" Insira o divisor: \n");
	scanf("%d", &n2);
	
	if (n2 == 0) {
		printf(" Erro!!! \n");
	} else {
		quociente = n1 / n2;
		printf(" Quociente: %d \n", quociente);
	}	
}
