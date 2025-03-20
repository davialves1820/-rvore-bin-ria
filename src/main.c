#include "move.h"
#include "insert_functions.h"
#include "free_memory.h"
#include "search.h"

int main(void) {

    binary_tree t;
    iniciar(&t);
    inserir_raiz(&t, 10);
    inserir_esquerda(t, 10, 12);
    inserir_esquerda(t, 12, 13);
    inserir_direita(t, 10, 2);
    exibe_pre_ordem(t);
    printf("\n");
    exibe_in_ordem(t);
    printf("\n");
    exibe_pos_ordem(t);
    printf("\n");
    liberar_arvore(t);

    return 0;
}