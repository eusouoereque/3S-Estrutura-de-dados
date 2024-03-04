#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int RecursiveFib (int n, int *calls){

    *calls += 1;

    if(n == 0){
        return (0);
    }else if (n == 1){
        return(1);
    }else{
        return (RecursiveFib(n-1, &*calls) + RecursiveFib(n-2, &*calls));
    }
}

int main(){
    int i=0, fib, x, result=0;
    int calls=0;

    scanf("%d", &x);

    while(i < x){
        scanf("%d", &fib);
        result = RecursiveFib(fib, &calls);

        printf("fib(%d) = %d calls = %d\n", fib, calls-1, result);
        calls= 0;
        i++;
    }
    
    return 0;
}
