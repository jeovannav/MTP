#include <stdio.h>
#include <stdlib.h>

int soma(int *vetA, int N){
    if (N==0)
        return vetA[0];
    else
        return vetA[N]+ soma (vetA, N-1);
}

int main(){
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int N = sizeof(A)/sizeof(int);
    printf("%d", soma(A,N-1));
    return EXIT_SUCCESS;
}
