/* 
Fa�a um programa que leia o valor da hora de trabalho (em reais) e o n�mero de horas trabalhadas no m�s.
Imprima o valor a ser pago ao funcion�rio, adicionando 10% sobre o valor calculado.
*/

#include <iostream>
#include <math.h>

main() {
	float horaTrabalho, horasTrabalhadas, pagamento;
		
	horaTrabalho = 5;
	horasTrabalhadas = 220;
	pagamento = horaTrabalho * horasTrabalhadas * 1.10;
	
	printf(" O pagamento por %.2f horas trabalhadas, no valor de R$%.2f hora trabalho, acrescido de 10 porcento, e: %.2f", horasTrabalhadas, horaTrabalho, pagamento);
}
