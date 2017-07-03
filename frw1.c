#include <stdio.h>
#include <stdlib.h>
#define MAXCHAR 256

void captura(char * nome, int * idade_em_anos, float * altura_em_metros)
{
    fprintf(stdout,"Entre com o Nome: ");
    fgets(nome,MAXCHAR,stdin);
    fprintf(stdout,"Entre com a idade [anos]: ");
    fscanf(stdin,"%d", &idade_em_anos);
    fprintf(stdout,"Entre com a altura [metros]: ");
    fscanf(stdin,"%f", &altura_em_metros);
    fprintf(stdout,"%s%d\n%f\n",nome,idade_em_anos,altura_em_metros);
}

void mostra(char * nome, int * idade_em_anos, float * altura_em_metros)
{
    printf("%s, %d anos, %f metros.\n",nome,idade_em_anos,altura_em_metros);
}

void gravar(char * nome_arquivo)
{
    char nome[MAXCHAR];
    int idade_em_anos;
    float altura_em_metros;
    FILE * arquivo = NULL;
    arquivo = fopen("infe.txt","w");
    if(arquivo == NULL)
    {
        fprintf(stderr,"Problema na gravacao\n");
        exit(EXIT_FAILURE);
    }
    fprintf(stdout,"Entre com o Nome: ");
    fgets(nome,MAXCHAR,stdin);
    fprintf(stdout,"Entre com a idade [anos]: ");
    fscanf(stdin,"%d", &idade_em_anos);
    fprintf(stdout,"Entre com a altura [metros]: ");
    fscanf(stdin,"%f", &altura_em_metros);
    fprintf(arquivo,"%s%d\n%f\n",nome,idade_em_anos,altura_em_metros);
    fclose(arquivo);
}

void recuperar()
{
    char nome[MAXCHAR];
    int idade_em_anos;
    float altura_em_metros;
    FILE * arquivo = NULL;
    arquivo = fopen("infe.txt","r");
    if(arquivo == NULL)
    {
        fprintf(stderr,"Arquivo inexistente\n");
        exit(EXIT_FAILURE);
    }
    fgets(nome,MAXCHAR,arquivo);
    scanf(arquivo,"%d",&idade_em_anos);
    scanf(arquivo,"%f",&altura_em_metros);
    fclose(arquivo);
    mostra(nome,idade_em_anos,altura_em_metros);
}

void menu(char * nome_arquivo)
{
    int opc;
    char c;
    printf("1 - Gravar\n");
    printf("2 - Recuperar\n");
    printf("3 - Sair\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opc);
    while(!(c = getchar()));
    if (opc == 1)
        gravar();
    else
        if(opc == 2)
        recuperar(nome_arquivo);
    return opc;
}

int main ()
{
    char nome_arquivo[MAXCHAR];
    printf("Entre om arquivo: ");
    fgets(nome_arquivo);
    menu();

    return EXIT_SUCCESS;
}
