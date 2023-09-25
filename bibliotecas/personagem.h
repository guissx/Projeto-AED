#include <stdio.h>
#include "pilha.h"

typedef struct 
{
    char nome[30];
    tp_item vida, energia;
    tp_pilha deck[10];
}jogador;

void cria_jogador(jogador *jogador){
    printf("Qual o nome do jogador??");
    scanf(" %s", jogador->nome);
    jogador->vida = 20;
    jogador->energia = 5;
    inicializa_pilha(jogador->deck);
}