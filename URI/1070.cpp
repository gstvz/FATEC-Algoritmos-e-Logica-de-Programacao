#include <iostream>
 
using namespace std;
 
int main() {
 
	int x, contador;
	
	scanf("%d", &x);
	
	for(contador = x; contador < x + 12; contador++) {		
		if(contador % 2 != 0) {
			printf("%d\n", contador);
		};
	};
 
    return 0;
}
