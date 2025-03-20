#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>

// Estrutura de cada nó da árvore binária
typedef struct node {
    int content; // Conteúdo
    struct node* left; // Ponteiro para a subárvore a esquerda
    struct node* right; // Ponteiro para a subávore a direita
} node;

#endif