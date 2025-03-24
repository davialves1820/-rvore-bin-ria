#include "empty.h"

// Retorna 0 ser for falso e 1 se for verdadeiro
int empty(binary_tree* t) {
    if (*t == NULL) {
        return 1;
    }
    return 0;
}