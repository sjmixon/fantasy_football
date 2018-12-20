
#ifndef GAME_H
#define GAME_H

#define REGULAR 0
#define PLAYOFF 1
#define CHMPSHP 2

class Game
{
    public :
        Game(int, int, int, int, int);

        int get_year();
        int get_week();
        int get_type();
        int* get_teams();

    private :
        int year;
        int week;
        int type;
        int teams[2];
};

#endif

