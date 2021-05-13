#include <stdio.h>
#include <stdlib.h>

int main(){
    char opcao;
    char fileName[30] = "";
    do{
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
            break;
        case 'B':
        printf("\nCalcular: ");
            scanf("%s", fileName);
            break;
        case 'C':
            break;

        case 'D':
            break;
        
    
        }

    }while(opcao != 'S');
    printf("\n\n ----- Sistema Encerrado ----- \n\n");
    return 0;
}