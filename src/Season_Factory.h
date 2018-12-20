
#ifndef SEASON_FACTORY_H
#define SEASON_FACTORY_H

#include <vector>

#include "Season.h"

class Season_Factory
{
    public :
        ~Season_Factory();

        static Season_Factory& get_instance();
        std::vector<Season*> get_seasons();

    private :
        std::vector<Season*> seasons;

        Season_Factory();
};

#endif

