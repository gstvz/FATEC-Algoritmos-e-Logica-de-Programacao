/* 
Tres amigos jogaram na loteria. Caso eles ganhem, o premio deve ser repartido proporcionalmente ao valor que cada deu para a realizacao da aposta.
Faca um programa que leia quanto cada apostador investiu, o valor do premio, e imprima quanto cada um ganharia do premio com base no valor investido.
*/

#include <iostream>
#include <math.h>

main() {
	float premio, aposta1, aposta2, aposta3, totalApostas, amigo1, amigo2, amigo3;
	
	premio = 50.000;
	aposta1 = 20.000;
	aposta2 = 10.000;
	aposta3 = 1.000;
	totalApostas = aposta1 + aposta2 + aposta3;
	amigo1 = premio * aposta1 / totalApostas;
	amigo2 = premio * aposta2 / totalApostas;
	amigo3 = premio * aposta3 / totalApostas;
	
	printf(" O valor do premio e: R$%.3f \n O primeiro apostou R$%.3f \n O segundo apostou R$%.3f \n O terceiro apostou R$%.3f \n", premio, aposta1, aposta2, aposta3);
	printf(" O primeiro levou R$%.3f \n O segundo levou R$%.3f \n O terceiro levou R$%.3f ", amigo1, amigo2, amigo3);
}
