#include <stdlib.h>
#include <stdio.h>

void merge(int v[], int esq, int meio, int dir){
	//sua implentacao aqui
	
}


//Dica: use um vetor auxiliar temporário para a mesclagem
void mergeSort(int v[], int esq, int dir){
	if (esq < dir) {
	
	int meio = (esq + dir) / 2;
	mergeSort(v, esq, meio);
	mergeSort(v, meio + 1, dir);
	merge(v, esq, meio, dir);
	}
}



int main(void) {
	
	
	
return 0;
}
