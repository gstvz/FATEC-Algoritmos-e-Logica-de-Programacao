#include <iostream>
 
using namespace std;
 
int main() {

	int NUMBER, HOURS;
	double VALUE, SALARY;
	scanf("%d %d %lf", &NUMBER, &HOURS, &VALUE);
	SALARY = VALUE * HOURS;
	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", NUMBER, SALARY);
	
	return 0;
}
