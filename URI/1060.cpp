#include <iostream>
 
using namespace std;
 
int main() {
 
	double x;
	int y = 1;
	int z = 0;
	
	while(y <= 6) {
		scanf("%lf", &x);		
		if(x > 0) {
			z++;
		};
		y++;
	};
	
	printf("%d valores positivos\n", z);
 
    return 0;
}
