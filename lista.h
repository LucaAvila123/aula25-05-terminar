#ifndef LISTA_H
#define LISTA_H

#include "pokemon.h"

typedef struct cel Celula;
typedef struct lista Lista;

Lista* inicializaListaVazia();
void insere(Lista* lista, tPokemon* pokemon);
void retira(Lista* lista, int pokedex);
void imprime(Lista* lista);
#endif