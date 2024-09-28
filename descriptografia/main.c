#include <stdio.h>
#include "descriptografia.h"

int main(){
	int qtdMensagens, i=0, variavelB;
	char texto[54];
		
	scanf("%d", &qtdMensagens);
	
	while(i < qtdMensagens){
		
		scanf("%d", &variavelB);
		
		scanearMensagem(texto);
		
		descriptografarMensagem(texto, variavelB);
		
		printf("%s\n", texto);
		
		i++;
	
	}	
	
	return 0;
}
