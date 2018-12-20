
#ifndef SEASON_H
#define SEASON_H

#include <string>

class Season
{
    public :
        Season(int, int, int, std::string);

        int get_year();
        int get_team();
        int get_place();
        std::string get_name();

    private :
        int year;
        int t_id;
        int place;
        std::string name;
};

#endif

