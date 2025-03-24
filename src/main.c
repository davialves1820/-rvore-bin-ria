#include "move.h"
#include "insert_functions.h"
#include "free_memory.h"
#include "search.h"
#include "empty.h"

int main(void) {

    binary_tree t;

    iniciar(&t);
    printf("Vazia? %s", empty(&t) == 1 ? "Sim\n" : "Nao\n");
    
    inserir_raiz(&t, 10);
    printf("Vazia? %s", empty(&t) == 1 ? "Sim\n" : "Nao\n");
    
    inserir_esquerda(t, 10, 12);
    inserir_esquerda(t, 12, 13);
    inserir_direita(t, 10, 2);
    
    printf("Exibir pre-ordem\n");
    exibe_pre_ordem(t);
    printf("\n");
    printf("Exibir in-ordem\n");
    exibe_in_ordem(t);
    printf("\n");
    printf("Exibir pos-ordem\n");
    exibe_pos_ordem(t);
    printf("\n");
    liberar_arvore(t);

    return 0;
}