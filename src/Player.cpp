
#include "Player.h"

Player::Player(int my_id, std::string my_pos, std::string my_owner) :
    id(my_id),
    position(my_pos),
    name(my_owner)
{
}

int Player::get_id()
{
    return (id);
}

std::string Player::get_position()
{
    return (position);
}

std::string Player::get_name()
{
    return (name);
}

