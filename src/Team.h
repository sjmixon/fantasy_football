
#ifndef TEAM_H
#define TEAM_H

#include <string>

class Team
{
    public :
        Team(int, std::string);
        int get_id();
        std::string get_owner();

    private :
        int id;
        std::string owner;
};

#endif

