/* 
Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h (quilometros por hora).
A formula de conversao e: K = M * 3.6, sendo K a velocidade em km/h e M em m/s.
*/

#include <iostream>
#include <math.h>

main() {
	float kmPorH, mPorS;
	
	printf(" Insira a velocidade em m/s: ");
	scanf("%f", &mPorS);	
	
	kmPorH = mPorS * 3.6;
	
	printf(" %.2f m/s convertido para km/h e %.2f km/h ", mPorS, kmPorH);	
}
