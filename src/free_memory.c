#include "free_memory.h"

// Libera a memória dos nós
void liberar_arvore(binary_tree t) {
    if (t == NULL) return;
    
    liberar_arvore(t->left);  // Libera a subárvore esquerda
    liberar_arvore(t->right); // Libera a subárvore direita
    
    free(t);  // Libera o próprio nó
}
