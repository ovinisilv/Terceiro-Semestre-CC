#include <stdlib.h>
#include <stdio.h>

int buscaBinaria(int v[], int n, int alvo) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (v[meio] == alvo) {
            return meio;
        } else if (v[meio] < alvo) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}



int main(void){



int v[] = {2, 5, 8, 12, 16, 23, 38, 56};
int resultado = buscaBinaria(v, 8, 23);


printf("Indice encontrado: %d\n", resultado);

return 0;
}
