
#include <stdio.h>
#include <string.h>

#include "Season_Factory.h"

Season_Factory::~Season_Factory()
{
    std::vector<Season*>::iterator it = seasons.begin();
    while (it != seasons.end())
    {
        delete (*it);
        it = seasons.erase(it);
    }
}

Season_Factory::Season_Factory() :
    seasons()
{
    int d1;
    int d2;
    int d3;
    char name[64];
    FILE* file = fopen("database/seasons.txt", "r");
    fscanf(file, "%d %d %d", &d1, &d2, &d3);
    while (!feof(file))
    {
        fgets(name, 64, file);
        strtok(name, "\n");
        seasons.emplace_back(new Season(d1, d2, d3, std::string(name + 1)));
        fscanf(file, "%d %d %d", &d1, &d2, &d3);
    }
    fclose(file);
}

Season_Factory& Season_Factory::get_instance()
{
    static Season_Factory tf;
    return (tf);
}

std::vector<Season*> Season_Factory::get_seasons()
{
    return (seasons);
}

std::string Season_Factory::get_team_name(int y, int t)
{
    for (auto* s : seasons)
    {
        if (y == s->get_year() && t == s->get_team())
        {
            return (s->get_name());
        }
    }
    return (NULL);
}

