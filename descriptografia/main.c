#include <stdio.h>
#include "descriptografia.h"

int main(){
	int qtdMensagens, i=0, variavelB, textoNumero[50];
	unsigned char texto[54];
		
	scanf("%d", &qtdMensagens);
	
	while(i < qtdMensagens){
		
		scanf("%d", &variavelB);
		
		scanearMensagem(texto, textoNumero);
		
		descriptografarMensagem(texto, variavelB);
		
		printf("%s\n", texto);
		
		i++;
	
	}	
	
	return 0;
}
