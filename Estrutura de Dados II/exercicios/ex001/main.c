#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// #define MAX = 100;

typedef struct {
	int dados[100];
	int topo;
} Pilha;


	void inicializar(Pilha *p) {
		p->topo = -1;
	}

// Complete abaixo:
	int push(Pilha *p, int valor) {
		if(p->topo == 99) return 0; //pilha cheia
		p->dados[++(p->topo)] = valor;
		return 1;
	}

	int pop(Pilha *p) {
		if (p->topo == -1) return -1;  //pilha vazia
		return p->dados[(p->topo)--];
	}


	void mostrar(Pilha *p){
	for(int i = 0; i<= p->topo; i++){
			printf("%d\n", p->dados[i]);
		}
	}


	int main(void){
		Pilha *pi;
		pi = malloc(sizeof(*pi));
		inicializar(pi);
		
		
		push(pi, 10);
		push(pi, 49);
		
		mostrar(pi);

		free(pi);
		return 0;
	}
