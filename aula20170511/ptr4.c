#include<stdio.h>
#include<stdlib.h>
int main ()
{
    float x, y, s;
    printf("Digite 2 numeros reais: \n");
    scanf("%f %f", &x, &y);
    unsigned char *p;
    printf("Endere�o dos numeros x: %p | conteudo: %f\n", &x, x);
    printf("Endere�o dos numeros y: %p | conteudo: %f\n", &y, y);
    s=x+y;
    printf("Endere�o da soma: &p\n", &s, s);
    return EXIT_SUCCESS;

}
