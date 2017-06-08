#include <stdio.h>
#include <stdlib.h>
#define L 2
#define C 4

void imprime(float M[L][C])
{
    int i, j;
    printf("\nMatriz original: \n");
    for(i = 0; i < L; i++)
        {
            for (j = 0; j < C; j++)
            {
                printf("%g\t", M[i][j]);
            }
            printf("\n");
        }
    printf("\n");
}

void transposta(float M[L][C])
{
    int i, j;
    printf("Matriz transposta: \n");
    for(j = 0; j < C; j++)
    {
        for(i = 0; i < L; i++)
            printf("%g\t", M[i][j]);
        printf("\n");
    }
}

int main()
{
    float matriz[L][C];
    int i, j;
    for(i = 0; i < L; i++)
        {
            for (j = 0; j < C; j++)
            {
                printf("Entre com [%d][%d]: ", i, j);
                scanf("%f", (&matriz[i][j]));
            }
        }
        imprime(matriz);
        transposta(matriz);


    return EXIT_SUCCESS;
}
