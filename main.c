#include "velha.h"
#include <stdio.h>
int main(void)
{
    field   game[9];

    printf(CLEAN);
    printf("Use os digitos de 1-8 para marcar um campo com um simbolo.\n");
    printf("Pressione enter para iniciar: \n");
    getchar();
    set_game(game);
    run(game);
    return (0);
}