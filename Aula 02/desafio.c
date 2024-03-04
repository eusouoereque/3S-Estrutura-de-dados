#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

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

    int vetselect[10000], vetinsert[10000], vetbubble[10000], i;
    clock_t t;
    double tempo;

    for (i = 0; i < 10000; i++){
        vetinsert[i] = rand(); //gerando valores aleatorios e guardando no vetor
    }

    for (i = 0; i < 10000; i++){
        vetselect[i] = vetinsert[i];
        vetbubble[i] = vetinsert[i];
    }
        

    for(i=0; i<10000;i++){
        printf("| %d ", vetinsert[i]);
    }

    printf("\n-------------------------------------------------------------------------------------------------------------------\n");


    //Medindo o tempo do Insertsort
    t = clock();
    insertsort(vetinsert, 10000);
    t = clock() - t;

    tempo = t * 1000 / CLOCKS_PER_SEC;

    printf("Tempo do Insertsort: %g ms\n", tempo);
    //Final do tempo do Insertsort

    //Medindo o tempo do Selectsort
    t = clock();
    selectsort(vetselect, 10000);
    t = clock() - t;

    tempo = t * 1000 / CLOCKS_PER_SEC;

    printf("Tempo do Selectsort: %g ms\n", tempo);
    //Final do tempo do Selectsort

    //Medindo o tempo do Bubblesort
    t = clock();
    bubblesort(vetbubble, 10000);   
    t = clock() - t;

    tempo = t * 1000 / CLOCKS_PER_SEC;

    printf("Tempo do Bubblesort: %g ms\n", tempo);
    //Final do tempo do Bubblesort

    return 0;
}