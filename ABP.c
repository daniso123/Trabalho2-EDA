#include<stdlib.h>
#include<stdio.h>
#include "ABP.h"

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
/*int insere_ArvBin(ArvBin *raiz, int valor{
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
