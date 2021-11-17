#include <iostream>
 
using namespace std;
 
int main() {
 
	int n, contador = 0, num, in = 0, out = 0;
	
	scanf("%d", &n);
	
	while(contador < n) {
		scanf("%d", &num);
		
		if(num >= 10 && num <= 20) {
			in++;
		} else {
			out++;
		};
		
		contador++;
	};
	
	printf("%d in\n", in);
	printf("%d out\n", out);
 
    return 0;
}
