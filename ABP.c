#include <stdlib.h>
#include <stdio.h>
#include "ABP.h"

Arvore *cria_arv_vazia()
{
    return NULL;
}

Arvore *inserir(Arvore *a, int v)
{
    if (a == NULL)
    {
        a = (Arvore *)malloc(sizeof(Arvore));
        a->chave = v;
        a->pEsq = NULL;
        a->pDir = NULL;
    }
    else if (v < a->chave)
    {
        a->pEsq = inserir(a->pEsq, v);
    }
    else
    {
        a->pDir = inserir(a->pDir, v);
    }
    return a;
}
int min(Arvore *a)
{
    if (a->pEsq != NULL)
    {
        return min(a->pEsq);
    }
    else
    {
        return a->chave;
    }
}

int max(Arvore *a)
{
    if (a->pDir != NULL)
    {
        return max(a->pDir);
    }
    else
    {
        return a->chave;
    }
}

Arvore *Remover(Arvore *a, int v)
{
    if (a == NULL)
    {
        return NULL;
    }
    else
    {
        if (a->chave > v)
        {
            a->pEsq = Remover(a->pEsq, v);
        }
        else if (a->chave < v)
        {
            a->pDir = Remover(a->pDir, v);
        }
        else
        {
            if ((a->pEsq == NULL) && (a->pDir == NULL))
            {
                free(a);
                a = NULL;
            }
            else if (a->pDir == NULL)
            {
                Arvore *tmp = a;
                a = a->pEsq;
                free(tmp);
            }
            else if (a->pEsq == NULL)
            {
                Arvore *tmp = a;
                a = a->pDir;
                free(tmp);
            }
            else
            {
                Arvore *tmp = a->pEsq;
                while (tmp->pDir != NULL)
                {
                    tmp = tmp->pDir;
                }
                a->chave = tmp->chave;
                tmp->chave = v;
                a->pEsq = Remover(a->pEsq, v);
            }
        }
    }
    return a;
}
void imprime_crescente(Arvore *arv)
{
    if (arv != NULL)
    {
        printf("%d\n", min(arv));
        imprime_crescente(Remover(arv, min(arv)));
    }
}
