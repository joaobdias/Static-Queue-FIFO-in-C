#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "fila.h"

Fila *Criafila(){
	
	Fila *aux;
	aux = (Fila*) malloc (sizeof(Fila));
	
	if (aux == NULL){
		
		printf("Houve um erro na criação da fila");
		system("pause");
		return 0;
}
	aux-> frente = 0;
	aux-> tras = 0;
	aux-> qtd = 0;
	return aux;
}

void insereValor(Fila *ptr, int codigo){
	
	if (ptr->qtd < 10){
	ptr->valores[ptr->tras].nome = codigo;
	ptr->tras++;
	ptr->qtd++; 
} 
	else {
	printf("\n\n FILA CHEIA \n\n");
 }
}

void removeValor(Fila *ptr){
	
	if (ptr->qtd > 0){
	ptr->valores[ptr->frente].nome = 0;
	ptr->qtd--;
	organizaFila(ptr);
	ptr->tras--;
 }
}

void organizaFila(Fila*ptr){
	
	int i;
	
	for (i = ptr->frente + 1; i < ptr->tras; i++){
		ptr->valores[i-1] = ptr->valores[i];
	}
}
	

void imprimeFila(Fila *ptr){
	
	int i;
	
	printf("\n\nFila: \nFrente <- ");
	for(i = ptr->frente; i < ptr->tras; i++){
		printf("%d <- ",ptr->valores[i].nome);
	}
	
}
