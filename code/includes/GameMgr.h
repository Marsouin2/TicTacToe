#ifndef GAME_MGR_H
#define GAME_MGR_H

#include "SingletonInputMgr.h"
#include "Player.h"
#include "MapMgr.h"

#include <random>

namespace Randomizer
{
    enum DiceValues
    {
        LOWEST_VALUE_FOR_DICE_OF_SIX = 1,
        HIGHEST_VALUE_FOR_DICE_OF_SIX = 6
    };
}

class GameMgr
{
private:
    Player _playerOne;
    Player _playerTwo;
    MapMgr _mapMgr;

public:
    GameMgr();
    virtual ~GameMgr();
    void runGame();
    void askAndStoreForPlayerNames(void);
    int generateRandomDiceOfSixNumber(void);
    void getGameStartingPlayer(void);

};

#endif /* GAME_MGR_H */
