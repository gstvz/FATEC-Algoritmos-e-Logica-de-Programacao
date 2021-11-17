#include <iostream>
 
using namespace std;
 
int main() {
 
	int n, contador = 1;
	
	scanf("%d", &n);
	
	while(contador <= n) {
		if(contador % 2 == 0) {
			printf("%d^2 = %d\n", contador, contador * contador);
		};
		contador++;
	};
 
    return 0;
}
