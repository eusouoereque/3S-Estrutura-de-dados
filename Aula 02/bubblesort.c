#include <stdio.h>
#include <math.h>
#include <stdlib.h>


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
            }
        }
    }
}

int main(){
    int vet[10]={23, 42, 12, 43, 13, 56, 18, 45, 89, 67};
    int i;

    for(i=0; i<10;i++){
        printf("%d ", vet[i]);
    }

    printf("\n\n");

    bubblesort(vet, 10);

    for(i=0; i<10;i++){
        printf("%d ", vet[i]);
    }    

    return 0;
}