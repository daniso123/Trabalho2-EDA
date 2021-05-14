#ifndef ABP_H
#define ABP_H
#include <string.h>

typedef struct _arvore
{
    int chave;
    struct _arvore *pEsq;
    struct _arvore *pDir;
    int FatBal;
} Arvore;

Arvore *cria_arv_vazia();
void imprime_decrescente(Arvore *a);
int min(Arvore *a);

int max(Arvore *a);
void imprime_decrescente(Arvore *a);

/*typedef struct NO* ArvBin;
int insere_ArvBin(ArvBin *raiz, int valor);
ArvBin* cria_ArvBin();*/

#endif