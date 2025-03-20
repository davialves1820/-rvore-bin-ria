#include "initialize.h"

void iniciar_no(node* n, int x) {
    if (n != NULL) {
        (n)->content = x;
        n->left = NULL;
        n->right = NULL;
    }
}

// Inicializa a árvore
void iniciar(binary_tree* t) {
    if (*t != NULL) { // Se já tiver sido inicializada não efetua novamente
        *t = NULL;
    }
}
