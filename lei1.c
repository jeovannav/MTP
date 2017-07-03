#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char c;
    char * texto = NULL;
    printf("Digite seu texto; '\\'+ENTER para encerrar: \n");
    FILE *arquivo=NULL;
    arquivo=fopen("txt.txt", "w");
    do {
        c = getchar();
        fputc(toupper(c), arquivo);
    } while(c != '\\');
    return 0;
    }
