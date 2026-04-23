#include <stdio.h>
#include <stdlib.h>

#define N 10000000

int main() {
    int *v = malloc(sizeof(int)*N);

    for (int i = 0; i < N; i++)
        v[i] = i;

    long long soma = 0;

    for (int i = 0; i < N; i++)
        soma += v[i];

    printf("%lld\n", soma);

    free(v);
    return 0;
}
