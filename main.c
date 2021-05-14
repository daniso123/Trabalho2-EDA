#include <stdio.h>
#include <stdlib.h>
#include "ABP.c"

int main()
{
    char opcao;
    char fileName[30] = "";
    char linha[255];
    FILE *ABP = NULL;
    Arvore *a = cria_arv_vazia();
    /*char c = '1';
    int a = c - '0';*/
    char *resultado;
    int valor;

    do
    {
        printf("\n###########################");
        printf("\n");
        printf("\nA - Criar árvore\n");
        printf("\nB - Calcula Fator de Balanceamento\n");
        printf("\nC - Imprime ABP:\n");
        printf("\nD - Sair:\n");

        printf("\nOpção: ");
        scanf("\n%c", &opcao);
        switch (opcao)
        {
        case 'A':
            printf("\nEscreva o nome do arquivo: ");
            scanf("%s", fileName);
            if (ABP != NULL)
            {
                fclose(ABP);
            }
            ABP = fopen(fileName, "r");
            if (ABP == NULL)
            {
                printf("\nNão foi possivel abrir o arquivo\n");
            }
            else
            {
                printf("Arquivo aberto com sucesso!\n");
                ABP = fopen("ABP.csv", "r");

                while (!feof(ABP))
                {
                    resultado = fgets(linha, 255, ABP);
                    if (resultado)
                        valor = atoi(linha);
                    a = inserir(a, valor);
                }

                fclose(ABP);
            }
            break;
        case 'B':
            printf("\nCalcular: ");
            scanf("%s", fileName);
            break;
        case 'C':
            imprime_crescente(a);
            break;
        }

    } while (opcao != 'D');
    if (a != NULL)
        free(a);
    printf("\n\n ----- Sistema Encerrado ----- \n\n");
    return 0;
}