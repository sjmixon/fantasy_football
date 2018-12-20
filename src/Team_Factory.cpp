
#include <stdio.h>
#include <string.h>

#include "Team_Factory.h"

Team_Factory::~Team_Factory()
{
    std::vector<Team*>::iterator it = teams.begin();
    while (it != teams.end())
    {
        delete (*it);
        it = teams.erase(it);
    }
}

Team_Factory::Team_Factory() :
    teams()
{
    int d;
    char name[64];
    FILE* file = fopen("database/teams.txt", "r");
    fscanf(file, "%d", &d);
    while (!feof(file))
    {
        fgets(name, 64, file);
        strtok(name, "\n");
        teams.emplace_back(new Team(d, std::string(name + 1)));
        fscanf(file, "%d", &d);
    }
    fclose(file);
}

Team_Factory& Team_Factory::get_instance()
{
    static Team_Factory tf;
    return (tf);
}

std::vector<Team*> Team_Factory::get_teams()
{
    return (teams);
}

