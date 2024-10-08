#ifndef TABULEIRO_H
#define TABULEIRO_H

#include "localidade.h"

typedef struct Apontador {
    Localidade *localidade;
    struct Apontador *prox;
} Apontador;

typedef struct {
    Apontador *inicio;
    Apontador *fim;
    int tamanho;
} Tabuleiro;

void inicializarTabuleiro(Tabuleiro *tabuleiro);
Apontador* criarApontador(Localidade *localidade);
void inserirLocalidade(Tabuleiro *tabuleiro, Localidade *localidade);
void imprimirTabuleiro(Tabuleiro *tabuleiro);
Apontador* AvancaCasa(Apontador* inicio, int rolagem);

#endif