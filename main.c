#include <stdio.h>
#include <stdlib.h>
#include "ABP.c"

int main()
{
    char opcao;
    char fileName[30] = "";
    FILE *ABP = NULL;

    int n, i;
    Arvore *a = cria_arv_vazia();

    do
    {
        printf("\n###########################");
        printf("\n");
        printf("\nA - Gera ABP\n");
        printf("\nB - Calcula Fator de Balanceamento\n");
        printf("\nC - Imprime ABP:\n");
        printf("\nD - Sair:\n");

        printf("\nOpção: ");
        scanf("\n%c", &opcao);
        switch (opcao)
        {
        case 'A':
            printf("\nABP: ");
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
                ABP = fopen("ABP.csv", "w");

               // printf("Digite a chave: \n");

                //scanf("%d\n", &n);
                //a = inserir(a, n);
                a = inserir(a, 40);
                a = inserir(a, 54);
                a = inserir(a, 1082);
                a = inserir(a, 678);
                a = inserir(a, 8674);
                a = inserir(a, 87);
                a = inserir(a, 89);
                a = inserir(a, 990);
                a = inserir(a, 7642);
                a = inserir(a, 9762);
                a = inserir(a, 2345);
                a = inserir(a, 34);
                a = inserir(a, 897);
                a = inserir(a, 182);
                a = inserir(a, 9876);

                fclose(ABP);
            }
            break;
        case 'B':
            printf("\nCalcular: ");
            scanf("%s", fileName);
            break;
        case 'C':
            imprime_decrescente(a);
            break;
        }

    } while (opcao != 'D');
    if (a != NULL)
        free(a);
    printf("\n\n ----- Sistema Encerrado ----- \n\n");
    return 0;
}