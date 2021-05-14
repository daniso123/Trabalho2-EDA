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
        a->info = v;
        a->esq = NULL;
        a->dir = NULL;
    }
    else if (v < a->info)
    {
        a->esq = inserir(a->esq, v);
    }
    else
    {
        a->dir = inserir(a->dir, v);
    }
    return a;
}
int min(Arvore *a)
{
    if (a->esq != NULL)
    {
        return min(a->esq);
    }
    else
    {
        return a->info;
    }
}

int max(Arvore *a)
{
    if (a->dir != NULL)
    {
        return max(a->dir);
    }
    else
    {
        return a->info;
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
        if (a->info > v)
        {
            a->esq = Remover(a->esq, v);
        }
        else if (a->info < v)
        {
            a->dir = Remover(a->dir, v);
        }
        else
        {
            if ((a->esq == NULL) && (a->dir == NULL))
            {
                free(a);
                a = NULL;
            }
            else if (a->dir == NULL)
            {
                Arvore *tmp = a;
                a = a->esq;
                free(tmp);
            }
            else if (a->esq == NULL)
            {
                Arvore *tmp = a;
                a = a->dir;
                free(tmp);
            }
            else
            {
                Arvore *tmp = a->esq;
                while (tmp->dir != NULL)
                {
                    tmp = tmp->dir;
                }
                a->info = tmp->info;
                tmp->info = v;
                a->esq = Remover(a->esq, v);
            }
        }
    }
    return a;
}
void imprime_crescente(Arvore *arv)
{
    if (arv != NULL)
    {
        printf("%d, ", min(arv));
        imprime_decrescente(Remover(arv, min(arv)));
    }
}
/*
struct No {
 int Chave;
 struct No *pEsq, *pDir;
int FatBal;
}
ArvBin* cria_ArvBin(){
    ArvBin*raiz = (ArvBin*) malloc(sizeof(ArvBin));
    if(raiz !=NULL)
        *raiz = NULL;
        return raiz;


}
int insere_ArvBin(ArvBin *raiz, int valor){
    if(raiz == NULL)
    return 0;
    struct NO* novo;
    novo = (struct NO*) malloc(sizeof(struct NO));
    if (novo == NULL)
    return 0; 
    novo->Chave = valor;
    novo->pDir = NULL;
    novo->pEsq = NULL;

}*/
