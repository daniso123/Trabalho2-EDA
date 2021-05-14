#include <stdlib.h>
#include <stdio.h>
#include "ABP.h"


Arvore* cria_arv_vazia () {
   return NULL;
}

Arvore* inserir (Arvore *a, int v){
    if(a == NULL){
        a=(Arvore*)malloc(sizeof(Arvore));
        a->info = v;
        a->esq = NULL;
        a->dir = NULL;
    }
    else if(v < a->info){
        a->esq = inserir(a->esq,v);
    }
    else{
        a->dir = inserir(a->dir,v);
    }
    return a;
}
void imprime_decrescente (Arvore *arv){
    if (arv == NULL){
        printf("Não foi possivel imprmir!\n");
    }
    else{
        printf("%d ", arv->info);
        imprime_decrescente(arv->dir);
        imprime_decrescente(arv->esq);
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
