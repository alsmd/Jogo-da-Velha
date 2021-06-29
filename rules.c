#include <stdio.h>
#include "velha.h"

int check_game(field game[9])
{
    //first line
    if (is_equal(game[0].value, game[1].value, game[2].value))
        return (0);
    //second line
    if (is_equal(game[3].value, game[4].value, game[5].value))
        return (0);
    //third line
    if (is_equal(game[6].value, game[7].value, game[8].value))
        return (0);
    //first column
    if (is_equal(game[0].value, game[3].value, game[6].value))
        return (0);
    //second column
    if (is_equal(game[1].value, game[4].value, game[7].value))
        return (0);
    //third column
    if (is_equal(game[2].value, game[5].value, game[8].value))
        return (0);
    //first diagonal
    if (is_equal(game[0].value, game[4].value, game[8].value))
        return (0);
    //second diagonal
    if (is_equal(game[2].value, game[4].value, game[6].value))
        return (0);
    return (1);
}
int check_empate(field game[9])
{
    int index;
    int empate;

    index = 0;
    empate = 1;
    while (index < 9)
    {
        if (game[index].value != 'X' && game[index].value != 'O')
            return (0);
        index++;
    }
    return (empate);
}

