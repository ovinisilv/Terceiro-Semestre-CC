#include <stdio.h>
#include <stdlib.h>


	typedef struct No {
		int valor;
		struct No *prox;
	} No;

	typedef struct {
		No *frente;
		No *tras;	
	}Fila;

	void inicializar(Fila *f) {
		f->frente = NULL;
		f->tras= NULL;
	}


	void insere_fim(Fila *f, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    
    novo->valor = valor;
    novo->prox = NULL;

    if (f->tras == NULL) {
        f->frente = novo;
        f->tras = novo;
    } else {
        f->tras->prox = novo;
        f->tras = novo;
    }
	}
	
	int remove_inicio(Fila *f) {
    if (f->frente == NULL) {
        printf("Fila vazia!\n");
        return -1;
    }

    No *aux = f->frente;
    int valor = aux->valor;

    f->frente = f->frente->prox;


    if (f->frente == NULL) {
        f->tras = NULL;
    }

    free(aux);
    return valor;
}

	void mostrar(Fila *f){
    	No *atual = f->frente; 
   	 	printf("Fila: ");
    	while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}
	

	int main(void) {
	
	Fila *minhaFila;
	minhaFila = malloc(sizeof(Fila));
	inicializar(minhaFila);
	
	insere_fim(minhaFila, 10);
    insere_fim(minhaFila, 20);
    insere_fim(minhaFila, 30);
	
	mostrar(minhaFila);

	free(minhaFila);
	return 0;
	}
