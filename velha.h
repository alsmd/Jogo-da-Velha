#define is_equal(x, y, z) ((x == y) && (x == z))

//CONSOLE COMANDOS
#define GREEN "\033[32m"
#define ORANGE "\033[33m"
#define WHITE "\033[37m"
#define RED "\033[31m"
#define BLUE "\033[34m"
#define CLEAN "\033[2J\033[0;0H"
/*
    Cada quadrado tera um index onde o jogador pode usa-lo para selecionar o quadrado.
    Dessa forma podemos atribuir o simbolo do jogador nesse quadrado.
*/
typedef struct
{
    char    value;
    int     index;
} field;

/*
    Controls
*/

/*
    Responsavel por chamar e controlar as demais funções de controle, regras e outputs.
*/
void    run(field game[9]);

/*
    Ira receber o indice do campo selecionado pelo jogador e atualizar o jogo colocando esse simbolo.
*/
int     update_game(field game[9], int index, char simbol);

/*
    Ira setar todos os campos do jogo colocando como valor o seu respectivo indice.
*/
void    set_game(field game[9]);

/*
    Pega a posição do campo que o jogador atual deseja marcar.
*/
int     get_position(field game[9]);

/*
    Outputs
*/

/*
    Responsavel por printar a tela principal do jogo.
*/
void    print_game(field game[9], int player);

/*
    Responsavel por printar a tela de empate.
*/
void    print_empate();

/*
    Responsavel por printar a tela de vitoria.
*/
void    print_victory(int player);

/*
    Rules
*/

/*
    Ira checkar se a condição de vitoria foi atendida.
*/
int     check_game(field game[9]);

/* 
    Ira checkar se a condição de empate foi atendida.
*/
int     check_empate(field game[9]);
