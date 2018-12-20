
#include "Game.h"

Game::Game(int my_year, int my_week, int my_type, int my_1, int my_2) :
    year(my_year),
    week(my_week),
    type(my_type),
    teams()
{
    teams[0] = my_1;
    teams[1] = my_2;
}

int Game::get_year()
{
    return (year);
}

int Game::get_week()
{
    return (week);
}

int Game::get_type()
{
    return (type);
}

int* Game::get_teams()
{
    return (teams);
}

