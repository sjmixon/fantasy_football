
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
    public :
        Player(int, std::string, std::string);
        int get_id();
        std::string get_position();
        std::string get_name();

    private :
        int id;
        std::string position;
        std::string name;

        Player(const Player&);
        Player& operator=(const Player&);
};

#endif

