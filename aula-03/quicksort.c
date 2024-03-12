#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void quicksort (int *vetor, int esquerda, int direita){
    int i, j, pivo, aux;

    pivo = vetor[esquerda];

    i = esquerda;
    j = direita;

    while (i <= j){
        while (vetor[i] < pivo && i < direita){
            i++;
        }
        while (vetor[j] > pivo && j > esquerda){
            j--;
        }
        
        if ( i <= j){
           aux = vetor[i];
           vetor[i] = vetor[j];
           vetor[j] = aux;

           i++;
           j--; 
        }
        
    }

    if(j > esquerda){
        quicksort(vetor, esquerda, j);
    }

    if(i < direita){
        quicksort(vetor, i, direita);
    }
    
}

int main(){

    int vet[10] = {23, 45, 12, 43, 13, 56, 18, 42, 65, 67};
    int i, tam=10;

    for (i=0; i < tam; i++){
        printf("%d ", vet[i]);
    }

    printf("\n\n");

    quicksort(vet, 0, tam-1);

    for (i=0; i < tam; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}