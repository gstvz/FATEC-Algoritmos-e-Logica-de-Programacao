#include <iostream>
 
using namespace std;
 
int main() {
 
	int x, contador;
	
	scanf("%d", &x);
	
	for(contador = 1; contador <= x; contador++) {
		if(contador % 2 != 0) {
			printf("%d\n", contador);
		};
	};
 
    return 0;
}
