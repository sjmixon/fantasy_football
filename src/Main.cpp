
#include <iostream>
#include <vector>

#include "Season.h"
#include "Season_Factory.h"
#include "Team.h"
#include "Team_Factory.h"

int main(int, char**)
{
    std::vector<Team*> teams = Team_Factory::get_instance().get_teams();
    std::vector<Season*> seasons =
            Season_Factory::get_instance().get_seasons();
    for (auto* t : teams)
    {
        std::cout << t->get_id() << " " << t->get_owner() << std::endl;
    }
    for (auto* s : seasons)
    {
        std::cout << s->get_year() << " " << s->get_team() << " " <<
                s->get_place() << " " << s->get_name() << std::endl;
    }
    for (auto* s : seasons)
    {
        for (auto* t : teams)
        {
            if (s->get_team() == t->get_id())
            {
                std::cout << t->get_owner() << ": " << s->get_name() << std::endl;
            }
        }
    }
    return (0);
}

