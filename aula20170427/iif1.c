#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand (time(0));
    int i, conta =0;
    float n, prob;
    printf ("Entre com uma probabilidade:");
    scanf ("&f",&prob);
    for (i=0; i<100; i++)
    {
         n = rand(float)/(f) RAND_MAX;
         if(n<prob)
            conta n++;
    }
    printf ("querido usuario, s�o %d vezes.", conta);
    return EXIT_SUCESS;


}
