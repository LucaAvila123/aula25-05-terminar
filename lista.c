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
    Celula* nova = (Celula*) malloc (sizeof(Celula));
    nova->pokemon = pokemon;

    //inserindo um elemento ao final da lista;
    if(lista->prim == NULL){
       lista->prim = nova;
       lista->ult = lista->prim;
    }

    else{
        lista->ult->prox = lista->ult;
        lista->ult = lista->ult->prox = nova;
    }
}

void imprime(Lista* lista){
    Celula* p;
    for(p=lista->prim; p != NULL; p=p->prox){
        imprimePokemon(p->pokemon);
    }
}