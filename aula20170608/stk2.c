#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

void media(float vetor[N]){
    int i;
    float m;
    float s=0;
    for (i=0; i<N; i++){
            s=s+vetor[i];
    }
    m=s/N;
    printf("Media: %g", m);
}

void desvio(float vet[N]){
    int j, k;
    double med, d;
    float s1=0;
    double so=0;
    for (k=0; k<N; k++){
            s1=s1+vet[k];
    }
    med=s1/N;
    for (j=0; j<N; j++){
            so=so+pow((vet[j]-med), 2);
    }
    d=sqrt((1./(N-1))*so);
    printf("\nDesvio= %g", d);
}

int main(){
    float v [N];
    int i;
    for (i=0; i<N; i++){
        printf("Entre com o elemento [%d]: ", i);
        scanf("%f", &(v[i]));
    }
    media(v);
    desvio(v);
    return EXIT_SUCCESS;
}
