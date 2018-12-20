
#include "Season.h"

Season::Season(int my_year, int my_team, int my_place, std::string my_name) :
    year(my_year),
    t_id(my_team),
    place(my_place),
    name(my_name)
{
}

int Season::get_year()
{
    return (year);
}

int Season::get_team()
{
    return (t_id);
}

int Season::get_place()
{
    return (place);
}

std::string Season::get_name()
{
    return (name);
}

