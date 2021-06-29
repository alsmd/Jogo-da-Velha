#include <stdio.h>
#include "velha.h"

void    print_game(field game[9], int player)
{
    printf(CLEAN);
    printf("-------------------------------------------\n");
    printf("-------------------------------------------\n");
    if (player == 1)
        printf(BLUE);
    else
        printf(RED);
    printf("\t\t   Player %d\n", player);
    printf(WHITE);
    printf("\t\t   |     |   \n");
    printf("\t\t%c  |  %c  |  %c\n", game[0].value, game[1].value, game[2].value);
    printf("\t     --------------------\n");
    printf("\t\t%c  |  %c  |  %c\n", game[3].value, game[4].value, game[5].value);
    printf("\t     --------------------\n");
    printf("\t\t%c  |  %c  |  %c\n", game[6].value, game[7].value, game[8].value);
    printf("\t\t   |     |   \n");
    printf("-------------------------------------------\n");
    printf("-------------------------------------------\n");
}

void    print_victory(int player)
{
    printf(GREEN);
    printf(CLEAN);
    printf("-------------------------------------------\n");
    printf("-------------------------------------------\n");
    printf("\t\tPARABENS PLAYER %d!\n", player);
    printf("\n");
    printf("\n");
    printf("\t     --------------------\n");
    printf("\t\tVOCE VENCEU!\n");
    printf("\t     --------------------\n");
    printf("\n");
    printf("\n");
    printf("-------------------------------------------\n");
    printf("-------------------------------------------\n");
}

void    print_empate()
{
    printf(ORANGE);
    printf(CLEAN);
    printf("-------------------------------------------\n");
    printf("-------------------------------------------\n");
    printf("\t\t ¯\\_(0- 0)_/¯\n");
    printf("\n");
    printf("\n");
    printf("\t     --------------------\n");
    printf("\t\tDEU VELHA!!\n");
    printf("\t     --------------------\n");
    printf("\n");
    printf("\n");
    printf("-------------------------------------------\n");
    printf("-------------------------------------------\n");
}