#include <stdio.h>
#include "pilha.h"

typedef struct 
{
    char nome[30];
    tp_item vida;
    tp_pilha deck[6];
}monstro;

void cria_monstro1(monstro *monstro, int *a){
    monstro->nome = "Guis, O calmo";
    monstro->vida = 50;
    inicializa_pilha(monstro->deck);
    a = a + 1;
}

void cria_monstro2(monstro *monstro, int *a){
    *monstro->nome = "Gostosa, O gigante";
    monstro->vida = 50;
    inicializa_pilha(monstro->deck);
    a = a + 1;
}

void cria_monstro3(monstro *monstro, int *a){
    *monstro->nome = "Caranguga, O monstro do mangue";
    monstro->vida = 50;
    inicializa_pilha(monstro->deck);
    a = a + 1;
}

void cria_monstro4(monstro *monstro, int *a){
    *monstro->nome = "Coelhinho, O romantico";
    monstro->vida = 50;
    inicializa_pilha(monstro->deck);
    a = a + 1;
}

void cria_monstro5(monstro *monstro, int *a){
    *monstro->nome = "Zuma, O angolano";
    monstro->vida = 50;
    inicializa_pilha(monstro->deck);
    a = a + 1;
}