#include <stdio.h>
#include "pilha.h"
#include "structs.h"

void cria_jogador(jogador *jogador){
    printf("Qual o nome do jogador??");
    scanf(" %s", jogador->nome);
    jogador->vida = 20;
    jogador->energia = 5;
    inicializa_pilha(jogador->deck);
}

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
// Feito 24/09/2023- Criação dos monstros e do jogador
