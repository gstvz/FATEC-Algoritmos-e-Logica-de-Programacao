/*
Fac�a um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem �FIM!� ap�s a contagem.
*/

#include <iostream>

main() {
	int x = 10;
	
	while(x >= 0) {
		printf("%d ", x);
		x--;
	};
	
	printf("Fim");
};
