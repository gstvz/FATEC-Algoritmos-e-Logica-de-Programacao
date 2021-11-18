#include <iostream>
 
using namespace std;
 
int main() {
 
	int n, contador;
	
	scanf("%d", &n);
	
	for(contador = 1; contador <= 10; contador++) {
		printf("%d x %d = %d\n", contador, n, contador * n);
	};
 
    return 0;
}
