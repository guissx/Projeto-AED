#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#define MAX 100

typedef int
    tp_item;


typedef struct{
    int topo;
    tp_item item [MAX];
} tp_pilha;

void inicializa_pilha(tp_pilha *p){
    p->topo = -1;
}

int pilha_vazia(tp_pilha *p){
    if(p->topo == -1) return 1;
    return 0;
}

int pilha_cheia(tp_pilha *p){
    if(p->topo == MAX - 1) return 1;
    return 0;
}

char push(tp_pilha *p, char e){
    if(pilha_cheia(p)) return 0;
    p->topo++;
    p->item[p->topo]= e;
    return 1;
}

int pop(tp_pilha *p, tp_item *e){
    if(pilha_vazia(p)) return 0;
    *e = p->item[p->topo];
    p->topo--;
}

int top(tp_pilha *p, tp_item *e){
    if(pilha_vazia(p)) return 0;
    *e = p->item[p->topo];
}

int altura_pilha(tp_pilha *p){
    return p->topo+1;
}

void imprime_pilha(tp_pilha p){
    tp_item e;
    printf("\n");
    while (!pilha_vazia(&p))
    {
        pop(&p, &e);
        printf("%d ", e);
    }
}   

void tirar_impar(tp_pilha *p){
    tp_pilha p1;
    tp_item e;
    inicializa_pilha(&p1);
    while(!pilha_vazia(p)){
        pop(p, &e);
        if(e%2 == 0)
            push(&p1, e);
    }
    while (!pilha_vazia(&p1))
    {
        pop(&p1, &e);
        push(p, e);
    }
}

int iguais_pilha(tp_pilha p, tp_pilha p2){
    tp_item e, e1;
    if(altura_pilha(&p) != altura_pilha(&p2))
        return 0;
    while(!pilha_vazia(&p)){
        pop(&p, &e);
        pop(&p2, &e1);
        if(e != e1)
            return 0;
    }
    return 1;
}

int empilhar_pilha(tp_pilha *p1, tp_pilha*p2){
    tp_pilha paux;
    inicializa_pilha(&paux);
    if(altura_pilha(p1) + altura_pilha(p2) > MAX)
        return 0;
    tp_item e;
    while(!pilha_vazia(p2)){
        pop(p2, &e);
        push(&paux, e);
    }
    while (!pilha_vazia(&paux))
    {
        pop(&paux, &e);
        push(p1, e);
    }
    return 1;
}


void q1(tp_pilha *x, tp_item e){
    if (pilha_vazia(x)){
        push(x, e);
        return;
    }

    tp_pilha y, z;
    tp_item aux;
    inicializa_pilha(&y);
    inicializa_pilha(&z);
    while (e > x->item[x->topo] && !pilha_vazia(x)){
        pop(x, &aux);
        if(aux == 4) push(&y, aux);
        else if(aux == 6) push(&z, aux);
    }
    push(x, e);
    empilhar_pilha(x, &y);
    empilhar_pilha(x, &z);
}
#endif