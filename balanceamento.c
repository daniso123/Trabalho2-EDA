#include <stdlib.h>
#include <stdio.h>
#include "ABP.h"


// Calcula a altura de um no
int alt_NO(Arvore *no)
{
    if (no == NULL)
        return -1;
    else
        return no->FatBal;
}

//Calcula o fator de balanceamento de um no
int fatorBalanceamento_NO(Arvore *no, int valor)
{
    return labs(alt_NO(no->pEsq) - alt_NO(no->pDir));
}

int maior (int x, int y){
    if(x > y)
        return x;
    else
        return y;
}