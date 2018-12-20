
#include "Team.h"

Team::Team(int my_id, std::string my_owner) :
    id(my_id),
    owner(my_owner)
{
}

int Team::get_id()
{
    return (id);
}

std::string Team::get_owner()
{
    return (owner);
}

