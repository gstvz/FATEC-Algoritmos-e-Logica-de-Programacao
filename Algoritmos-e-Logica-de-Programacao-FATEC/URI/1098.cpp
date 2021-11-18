#include <iostream>
 
using namespace std;
 
int main() {
	double I, N;
	int J;
	
	for(I = 0; I < 2.1; I += 0.2) {
		for(J = 1; J <= 3; J++) {
			N = I + J;
			
			if(I == 0 || I > 1.8 || (I > 0.9 && I < 1.1)) {
				printf("I=%.lf J=%.lf\n", I, N);
			} else {
				printf("I=%.1lf J=%.1lf\n", I, N);
			};
		};
	}
	
    return 0;
}
