/* 
Tres amigos jogaram na loteria. Caso eles ganhem, o premio deve ser repartido proporcionalmente ao valor que cada deu para a realizacao da aposta.
Faca um programa que leia quanto cada apostador investiu, o valor do premio, e imprima quanto cada um ganharia do premio com base no valor investido.
*/

#include <iostream>
#include <math.h>

main() {
	float premio, aposta1, aposta2, aposta3, totalApostas, p1, p2, p3, amigo1, amigo2, amigo3;
	
	printf(" Insira o valor do premio: ");
	scanf("%f", &premio);
	
	printf(" Insira o valor da aposta 1: ");
	scanf("%f", &aposta1);
	
	printf(" Insira o valor da aposta 2: ");
	scanf("%f", &aposta2);
	
	printf(" Insira o valor da aposta 3: ");
	scanf("%f", &aposta3);
	
	totalApostas = aposta1 + aposta2 + aposta3;
	
	p1 = aposta1 / totalApostas;
	p2 = aposta2 / totalApostas;
	p3 = aposta3 / totalApostas;
		
	amigo1 = premio * p1;
	amigo2 = premio * p2;
	amigo3 = premio * p3;
	
	printf(" O valor do premio e: R$%.2f \n O primeiro apostou R$%.2f \n O segundo apostou R$%.2f \n O terceiro apostou R$%.2f \n", premio, aposta1, aposta2, aposta3);
	printf(" O primeiro levou R$%.2f \n O segundo levou R$%.2f \n O terceiro levou R$%.2f ", amigo1, amigo2, amigo3);
}
