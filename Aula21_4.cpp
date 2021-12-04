/*
O programa abaixo calcula o MDC (maior divisor comum) entre dois números inteiros (20 e 16).
*/

#include <iostream>

main(){
	int x, y, aux;
	
	printf ("Entre com um Numero: ");
	scanf ("%d", &x);
	
	printf ("Entre com outro Numero: ");
	scanf ("%d", &y);
  
	while (x != y){
		if (x > y) {
	 		x = x - y;
	 	} else  {
			aux = x;
			x = y;
			y = aux;
	 	};
	}; 
	
	printf ( "O valor de x e : %d ", x);
}

