#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c;
    int len = 0;
    char *texto = NULL;
    printf("Escreva; '\\'+ENTER para encerrar:\n");
    do
    {
       c = getchar();
       len++;
       texto = (char *) realloc(texto,len*sizeof(char));
       texto[len-1] = c;
       texto[len-1] = toupper(c);
    }while(c != '\\');
    texto[len-1] = '\0';
    printf("\n\n**********************\n\n");
    printf("%s", texto);

    return 0;
}
