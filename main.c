#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "fila.c"

int main (){
	
	setlocale (LC_ALL,"Portuguese");
	Fila *filaptr;
	int nome,aux,aux2,i;
	
	filaptr = Criafila();
	
	if (filaptr == NULL){
		printf("\nOcorreu um erro");
		return 0;
}	else {
		printf("\nO endereço da fila criada é: %p\n", filaptr);
}
	
	system("pause");	
	system("cls");
	
		printf("Digite quantos elementos deseja inserir: ");
		scanf("%d",&aux);
		system("cls");
		
		while (aux > 10){
			
			printf("NÚMERO MÁXIMO PERMITIDO: 10\n");
			printf("Digite quantos elementos deseja inserir: ");
			scanf("%d",&aux);
			system("cls");
		}
		
		for (aux2 = 0; aux2 < aux; aux2++){
			printf("Digite o valor a ser inserido: ");
			scanf("%d",&nome);
			insereValor(filaptr,nome);
}
		imprimeFila(filaptr);
		system("cls");
		printf("\nO endereço da fila criada é: %p\n", filaptr);
		for (i = filaptr->frente; i < filaptr->tras; i++)
			printf("\nO endereço é: %p\n", filaptr);
		system("pause");
		
	return 0;
}
