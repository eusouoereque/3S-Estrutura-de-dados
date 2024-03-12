#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void selectsort(int *vetor, int n){
    int menor, aux, i, j;
    for (i = 0; i < n-1; i++) {
        menor = i;
        for (j = i+1; j < n; j++){
            if (vetor[j] < vetor[menor])
                menor = j;
        }
        if (menor != i) {
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
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

    selectsort(vet, 10);

    for(i=0; i<10;i++){
        printf("%d ", vet[i]);
    }    

    return 0;
}