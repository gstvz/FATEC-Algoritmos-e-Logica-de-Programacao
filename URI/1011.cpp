#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {

	double RAIO, VOLUME;
	double pi = 3.14159;
	scanf("%lf", &RAIO);
	VOLUME = (4.0/3.0) * pi * (pow(RAIO, 3));
	printf("VOLUME = %.3lf\n", VOLUME);
	
	return 0;
}
