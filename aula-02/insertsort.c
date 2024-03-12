#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void insertsort(int *vetor, int n){

    int aux, i, j;

    for (i = 1; i < n; i++){
        aux = vetor[i];
        for (j = i-1; j >=0 && aux < vetor[j] ; j--){
            vetor[j+1] = vetor[j];
        }

        vetor[j+1] = aux;
        
    }
    
}

int main(){
    int vet[10]={23, 42, 12, 43, 13, 56, 18, 45, 89, 67};
    int i;

    for(i=0; i<10;i++){
        printf("%d ", vet[i]);
    }

    printf("\n\n");

    insertsort(vet, 10);

    for(i=0; i<10;i++){
        printf("%d ", vet[i]);
    }    

    return 0;
}