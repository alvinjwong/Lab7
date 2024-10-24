#include "Labyrinth.h"

bool isPathToFreedom(MazeCell* start, const std::string& moves) {
   std::vector<Item> collectedItem; // not right idk syntax rn but im putting out ideas.

   if (whatsHere == "SPELLBOOK") {
    collectedItem.push_back(SPELLBOOK);
    } else if (whatsHere == "POTION") {
        collectedItem.push_back(POTION);
    } else if (whatsHere == "WAND") {
        collectedItem.push_back(WAND);
        } else {
            //continue through pathing
        }
    }

    // for (something : moves) iterate and check what path
    //if moves->etc == nullptr, then its a false path
   

