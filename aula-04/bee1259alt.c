//PROBLEMA:
//1259 - Pares e Ímpares
//RESPOSTA:
//Accepted
//LINGUAGEM:
//C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
//TEMPO:
//0.075s
//TAMANHO:
//804 Bytes
//MEMÓRIA:
//-
//SUBMISSÃO:
//11/03/2024 22:02:36

// 804048   eusouoereque

#include <stdio.h>
#include <stdlib.h>

int apoiocrescente(int const *a, int const *b){
    return *a - *b;
}

int apoiodecrescente(int const *a, int const *b){
    return *b - *a;
}



int main(){
    int imp[100000], par[100000], N, x=0, indi=0, indp=0, temp, i;

    scanf("%d", &N);
    while(x<N){
        scanf("%d", &temp);
        if(temp%2 == 0){
            par[indp] = temp;
            indp++;
        }else{
            imp[indi] = temp;
            indi++;
        }
        x++;
    }

    qsort(par, indp, sizeof(int), apoiocrescente);

    qsort(imp, indi, sizeof(int), apoiodecrescente);

    for(i = 0; i < indp; i++){
        printf("%d\n", par[i]);
    }

    for(i = 0; i < indi; i++){
        printf("%d\n", imp[i]);
    }

    return 0;
}