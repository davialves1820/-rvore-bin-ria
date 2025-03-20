#include "move.h"

// Percore a árvore na sequência pré-ordem
void exibe_pre_ordem(binary_tree t) {
    if (t == NULL) { // Verifica se t é não vazia
        return;
    }

    // Exibe o conteúdo
    printf("%d ", t->content);
    
    // Anda a árvore até não ter elementos na esquerda das raízes
    if (t->left != NULL) {
        exibe_pre_ordem(t->left);
    }

    // Anda a árvore até não ter elementos na direita das raízes
    if (t->right != NULL) {
        exibe_pre_ordem(t->right);
    }
}

// Percore a árvore na sequência in-ordem
void exibe_in_ordem(binary_tree t) {
    if (t == NULL) { // Verifica se t é não vazia
        return;
    }
    
    // Anda a árvore até não ter elementos na esquerda das raízes
    if (t->left != NULL) {
        exibe_pre_ordem(t->left);
    }

    // Exibe o conteúdo
    printf("%d ", t->content);

    // Anda a árvore até não ter elementos na direita das raízes
    if (t->right != NULL) {
        exibe_pre_ordem(t->right);
    }
} 

// Percore a árvore na sequência pós-ordem
void exibe_pos_ordem(binary_tree t) {
    if (t == NULL) { // Verifica se t é não vazia
        return;
    }

    // Anda a árvore até não ter elementos na esquerda das raízes
    if (t->left != NULL) {
        exibe_pre_ordem(t->left);
    }

    // Anda a árvore até não ter elementos na direita das raízes
    if (t->right != NULL) {
        exibe_pre_ordem(t->right);
    }

    // Exibe o conteúdo
    printf("%d ", t->content);
} 