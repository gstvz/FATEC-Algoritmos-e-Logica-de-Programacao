/* 
Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s (metros por segundo).
A formula de conversao e: M = K/3.6, sendo K a velocidade em km/h e M em m/s.
*/

#include <iostream>
#include <math.h>

main() {
	float kmPorH, mPorS;
	
	kmPorH = 100;
	mPorS = kmPorH/3.6;
	
	printf(" %.2f km/h convertido para m/s e %.2f m/s ", kmPorH, mPorS);	
}
