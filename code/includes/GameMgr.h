#ifndef GAME_MGR_H
#define GAME_MGR_H

#include "SingletonInputMgr.h"
#include "Player.h"
#include "MapMgr.h"

#include <csignal>
#include <signal.h>
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
    static bool _bThereIsAWinner;
    //friend class SingletonSignalHandler;
    static void signalHandler(int)
    {
        std::cout << "\nSIGINT caught, stopping game...\n";
        _bThereIsAWinner = true;
    }

public:
    GameMgr();
    virtual ~GameMgr();
    void runGame();
    void askAndStoreForPlayerNames(void);
    int generateRandomDiceOfSixNumber(void);
    void getGameStartingPlayer(void);
    void signalSigintHandler(int signal);
};

#endif /* GAME_MGR_H */
