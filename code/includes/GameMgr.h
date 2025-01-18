#ifndef GAME_MGR_H
#define GAME_MGR_H

#include "SingletonInputMgr.h"
#include "Player.h"

class GameMgr
{
private:
    Player _playerOne;
    Player _playerTwo;
public:
    GameMgr();
    virtual ~GameMgr() = default;
    void runGame();
    void askAndStoreForPlayerNames(void);
};

#endif /* GAME_MGR_H */