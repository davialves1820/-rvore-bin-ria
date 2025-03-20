#include "insert_functions.h"

// Inicia a raíz
void inserir_raiz(binary_tree* t, int v_pai) {
    if (*t != NULL) { // Se a raíz já tiver sido preenchida encerra a função
        return;
    }
    // Aloca um novo nó para a raíz
    node* novo = (node*) malloc(sizeof(node));
    iniciar_no(novo, v_pai);
    *t = novo; 
}

// Insere um elemento na esquerda do elemento pai
void inserir_esquerda(binary_tree t, int v_pai, int v_filho) {
    if (t == NULL) { // Se a árvore estiver vazia não insere
        return;
    }

    // Busca se já existe um nó com o valor de v_filho
    binary_tree achou = busca(t,v_filho);
    if (achou != NULL) { // Se o conteúdo de v_filho já existe encerra a função
        return;
    }

    // Busca para procurar o nó de v_pai
    binary_tree p = busca(t, v_pai);
    if (p == NULL) { // Se o conteúdo de v_pai não existe encerra a função
        return;
    }

    // Caso o nó esquerdo já esteja preenchido encerra a função
    if (p->left != NULL) {
        return;
    }

    // Aloca um novo nó
    node* novo = (node*) malloc(sizeof(node));
    iniciar_no(novo, v_filho);
    p->left = novo;    
}

// Insere um elemento na direita do elemento pai
void inserir_direita(binary_tree t, int v_pai, int v_filho) {
    if (t == NULL) {
        return;
    }
    binary_tree achou = busca(t,v_filho);
    if (achou != NULL) {
        return;
    }

    binary_tree p = busca(t, v_pai);
    if (p == NULL) {
        return;
    }

    if (p->right != NULL) {
        return;
    }

    node* novo = (node*) malloc(sizeof(node));
    iniciar_no(novo, v_filho);
    p->right = novo;    
}