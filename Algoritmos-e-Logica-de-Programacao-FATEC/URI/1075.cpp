#include <iostream>
 
using namespace std;
 
int main() {
 
	int n, contador = 0;
	
	scanf("%d", &n);

	for(contador = 1; contador <= 10000; contador++) {
		if(contador % n == 2) {
			printf("%d\n", contador);
		};
	};
 
    return 0;
}
