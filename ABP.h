#ifndef  ABP_H
#define  ABP_H
#include <string.h>

typedef struct _arvore {
   int info;
   struct _arvore *esq;
   struct _arvore *dir;
} Arvore;

Arvore* cria_arv_vazia ();
void imprime_decrescente (Arvore *a);

/*typedef struct NO* ArvBin;
int insere_ArvBin(ArvBin *raiz, int valor);
ArvBin* cria_ArvBin();*/

#endif  