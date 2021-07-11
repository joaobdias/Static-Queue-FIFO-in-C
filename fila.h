typedef struct valor {
	
	int nome;
	
} Valor;

typedef struct fila {
	
	int frente, tras, qtd;
	Valor valores[9];
	
} Fila;

Fila *Criafila();
void insereValor(Fila *ptr, int codigo);
void removeValor(Fila *ptr);
void imprimeFila(Fila *ptr);
void organizaFila(Fila*ptr);
