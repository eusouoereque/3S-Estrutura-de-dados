#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int swaps;

void bubblesort (int *vetor, int n){

    int i, aux, troca = 1;

    while (troca) {
        troca = 0;

        for (i = 0; i < n-1; i++) {
            if (vetor[i] > vetor[i+1]) {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                troca = 1;
                swaps += 1;
            }
        }
    }
}

int main(){

    int vet[50];
    int N, i, L, x=0;

    scanf("%d", &N);
    while(x<N){
        scanf("%d", &L);
        for(i=0; i<L; i++){
            scanf("%d", &vet[i]);

        }
        bubblesort(vet, L);

        printf("Optimal train swapping takes %d swaps.\n", swaps);
        swaps = 0;
        x++;
    }

    return 0;
}