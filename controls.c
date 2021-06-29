#include <stdio.h>
#include "velha.h"

void    run(field game[9])
{
    int player;
    int is_empate;

    is_empate = 0;
    player = 1;
    while (check_game(game))
    {
        print_game(game, player);
        if (get_position(game))
            player =  player == 1? 2 : 1;
        if (check_empate(game))
        {
            is_empate = 1;
            break ;
        }
    }
    //Ao sair do loop o player atual sera oque perdeu, estou invertendo para pegar oque venceu
    player =  player == 1? 2 : 1;
    if (is_empate)
        print_empate();
    else
        print_victory(player);
}

int     get_position(field game[9])
{
    int         index;
    char        simbol[2];
    static int  i_sim = 0;

    simbol[0] = 'X';
    simbol[1] = 'O';
    scanf("%d", &index);
    if (update_game(game, index, simbol[i_sim]))
    {
        i_sim = i_sim == 1? 0 : 1;
        return (1);
    }
    return (0);
}

int     update_game(field game[9], int index, char simbol)
{
    int i;

    i = 0;
    while (i < 9)
    {
        if (game[i].index == index && (game[i].value != 'X' && game[i].value != 'O'))
        {
            game[i].value = simbol;
            return (1);
        }
        i++;
    }
    return (0);
}

void    set_game(field game[9])
{
    int index;

    index = 0;
    while (index < 9)
    {
        game[index].value = index + 48 + 1;
        game[index].index = index + 1;
        index++;
    }
}
