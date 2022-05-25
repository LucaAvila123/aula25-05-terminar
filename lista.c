#include "pokemon.h"
#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

//estrutura da célula
struct cel{
    tPokemon* pokemon;
    Celula* prox;
};

//lista com sentinela
struct lista{
    Celula* prim;
    Celula* ult;
};

Lista* inicializaListaVazia(){
    Lista* lista = (Lista*) malloc(sizeof(Lista));
    lista->prim = NULL;
    lista->ult  = NULL;
    //printf("Inicializou, aaaaaaa\n");
    return lista;
}

void insere(Lista* lista, tPokemon* pokemon){
    Celula* nova = (Celula*) malloc(sizeof(Celula));
    Celula* p = lista->prim;
    Celula* ant = NULL;
    nova->pokemon = pokemon;
    while(p != NULL && RetornaMatricula(p) != mat){
        ant = p;
        p = p->prox;
    }
}

void imprime(Lista* lista){
    Celula* p;
    for(p=lista->prim; p != NULL; p=p->prox){
        imprimePokemon(p->pokemon);
    }
}