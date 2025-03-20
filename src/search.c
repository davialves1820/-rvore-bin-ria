#include "search.h"

// Busca por um conteúdo na árvore
binary_tree busca(binary_tree t, int c) {
    if (t == NULL) { // Se a raíz for vazia retorna NULL
        return NULL;
    }
    
    if (t->content == c) { // Se a raíz for o valor procurado retorna
        return t;
    }

    // Busca recursiva nos filhos a esquerda
    binary_tree achou = busca(t->left, c);

    if (achou == NULL) { // Se não acho pelo lado esquerdo busca pelo lado direito
        achou = busca(t->right, c);
    }

    return achou;
}
