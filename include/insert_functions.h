#ifndef INSERT_FUNCTIONS
#define INSERT_FUNCTIONS

#include "search.h"

void inserir_raiz(binary_tree* r, int valor_pai);

// Insere um filho a esquerda
void inserir_esquerda(binary_tree t, int v_pai, int v_filho);

// Insere um filho a direita
void inserir_direita(binary_tree t, int v_pai, int v_filho);

#endif