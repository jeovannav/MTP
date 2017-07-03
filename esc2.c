#include <stdio.h>
#include <stdlib.h>
#define MAXCHAR 256

typedef
    struct Ponto{double x, y;} Ponto;

int main(){
    Ponto * conjunto=NULL;
    int qtd, i;
    char nome_arquivo[MAXCHAR];
    FILE*arquivo=NULL;
    printf("Entre com o nome do arquivo (sem espacos): ");
    scanf("%s", nome_arquivo);
    printf("Digite o numero de pontos que deseja registrar: ");
    scanf("%d", qtd);
    conjunto= (Ponto*)malloc(qtd*sizeof(Ponto));
    for (i=0; i<qtd; i++) {
        printf("Coordenada x de [%d]: ", i);
        scanf ("%lf", &(conjunto[i].x));
        printf("Coordenada y de [%d]: ", i);
        scanf ("%lf", &(conjunto[i].y));
    }
    arquivo=fopen(nome_arquivo, "wb");
    fwrite(conjunto, sizeof(Ponto), qtd, arquivo);
    fclose(arquivo);
    free(conjunto);
    return EXIT_SUCCESS;
}
