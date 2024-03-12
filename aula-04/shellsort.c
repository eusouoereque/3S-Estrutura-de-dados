#include <stdio.h>

void shellsort(int *vet, int n){
    int i, j, k, indk, aux;

    int vetk[3] = {5, 3, 1};

    for (indk = 0; indk < 3; indk++) {
        k = vetk[indk];

        for (i = k; i < n; i++) {
            aux = vet[i];
            for (j = i-k; j >= 0 && vet[j] > aux; j-=k) {   // ordena de forma ascendente
        //  for(j = i-k; j >= 0 && vet[j] < aux; j-=k){        ordena de forma decrescente
                vet[j+k] = vet[j];
            }
            vet[j+k] = aux;
        }
    }
}

int main(){
    int vet[30] = {49, 20,87, 47, 73, 77, 2, 64, 83, 94, 46, 75, 51, 56, 29, 40, 3, 85, 48, 45, 68, 90, 12, 79, 27, 54, 13, 97, 63, 70};

    int i, tam=30;

    for(i=0; i<tam;i++){
        printf("%d ", vet[i]);
    }

    shellsort(vet, tam);

    printf("\n\n");

    for(i=0; i<tam;i++){
        printf("%d ", vet[i]);
    }

    return 0;
}
