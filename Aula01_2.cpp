#include <iostream>
#include <string.h>
#include <math.h>

int main(){ 
    float a;
    int b;
    int x;

    a = 3+4*2;
    printf ("O valor de a e %.2f \n", a);

    b= 13/4;
    printf ("O quociente vale %d \n", b);

    b= 13%4;
    printf ("O resto vale %d \n ", b);

    x = pow(4, 3);
    printf("A potencia de (x) :  %2.f \n", x);

    x = pow(16, 0.5);
    printf("A raiz quadrada de (x) :  %2.f \n", x);

    x = pow(27, 0.333333333);
    printf("A raiz cubica de (x) :  %2.f \n", x);
}
