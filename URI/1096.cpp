#include <iostream>
 
using namespace std;
 
int main() {
 
	int I = 1, J = 7;
	
	while(I <= 9) {
		printf("I=%d J=%d\n", I, J);		
		J -= 1;
		
		if(J < 5) {
			J = 7;
			I += 2;
		};
	};
 
    return 0;
}
