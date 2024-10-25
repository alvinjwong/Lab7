#include "Labyrinth.h"
#include <vector>

bool isPathToFreedom(MazeCell* start, const std::string& moves) {
    //looks like it should work. About to start the debug test so I'll update you
   std::vector<Item> collectedItem; // not right idk syntax rn but im putting out ideas.
   MazeCell* currentLocation = start;
   if (currentLocation->whatsHere == Item::SPELLBOOK) {
    collectedItem.push_back(Item::SPELLBOOK);
    }
    if (currentLocation->whatsHere == Item::POTION) {
        collectedItem.push_back(Item::POTION);
    }
    if (currentLocation->whatsHere == Item::WAND) {
        collectedItem.push_back(Item::WAND);
    }
            //check to see if we start with any items
    

    // for (something : moves) iterate and check what path
    //if moves->etc == nullptr, then its a false path

//maybe have a while loop that sees if item::nothing idk
    

    for (char path : moves) {
        if (path == 'N') {
            currentLocation = currentLocation->north;
        } else if (path == 'E') {
            currentLocation = currentLocation->east;
        } else if (path == 'S') {
            currentLocation = currentLocation->south;
        } else if (path == 'W') {
            currentLocation = currentLocation->west;
        }
    }

    if (currentLocation == nullptr) {
        return false; // i think this means that there is nothing there/no path there
    }
   
   if (currentLocation->whatsHere == Item::SPELLBOOK) {
    collectedItem.push_back(Item::SPELLBOOK);
    }
    if (currentLocation->whatsHere == Item::POTION) {
        collectedItem.push_back(Item::POTION);
    }
    if (currentLocation->whatsHere == Item::WAND) {
        collectedItem.push_back(Item::WAND);
    }

    return collectedItem.size() == 3;


    //check again from each cell for items
}
