#include "Labyrinth.h"
#include <vector>
#include <iostream>

bool isPathToFreedom(MazeCell *start, const std::string &moves)
{
    bool foundWand = false, foundPotion = false, foundSpellbook = false;
    MazeCell *currentLocation = start;
    if (currentLocation->whatsHere == Item::SPELLBOOK)
    {
        foundSpellbook = true;

    }
    if (currentLocation->whatsHere == Item::POTION)
    {
        foundSpellbook = true;
    }
    if (currentLocation->whatsHere == Item::WAND)
    {
        foundWand = true;
    }
    // check to see if we start with any items

    // for (something : moves) iterate and check what path
    // if moves->etc == nullptr, then its a false path

    // maybe have a while loop that sees if item::nothing idk

    for (char path : moves)
    {
        //adding for debug purposes since I can't get normal debug to work
        /*std::cout << currentLocation << " contains " << itemToString(currentLocation->whatsHere) << std::endl;
        std::cout << "N: " << currentLocation->north << std::endl;
        std::cout << "E: " << currentLocation->east << std::endl;
        std::cout << "S: " << currentLocation->south << std::endl;
        std::cout << "W: " << currentLocation->west << std::endl;
        std::cout << std::endl;
        std::cout << "Your next step is " << path << std::endl;*/

        if (path == 'N')
        {
            currentLocation = currentLocation->north;
        }
        else if (path == 'E')
        {
            currentLocation = currentLocation->east;
        }
        else if (path == 'S')
        {
            currentLocation = currentLocation->south;
        }
        else if (path == 'W')
        {
            currentLocation = currentLocation->west;
        }

        if (currentLocation == nullptr)
        {
            return false; // i think this means that there is nothing there/no path there
        }

        if (currentLocation->whatsHere == Item::SPELLBOOK)
        {
            foundSpellbook = true;
        }
        if (currentLocation->whatsHere == Item::POTION)
        {
            foundPotion = true;
        }
        if (currentLocation->whatsHere == Item::WAND)
        {
            foundWand = true;
        }
    }
    
    return foundPotion && foundSpellbook && foundWand;
}

std::string itemToString(Item i){
    if (i == Item::NOTHING)
        return "nothing";
    else if (i == Item::POTION)
        return "potion";
    else if (i == Item::SPELLBOOK)
        return "spellbook";
    else if (i == Item::WAND)
        return "wand";
    return "";
}
