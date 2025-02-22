#include "../includes/GameMgr.h"

int main(void)
{
    GameMgr *gameMgr = new GameMgr();

    gameMgr->runGame();

    delete(gameMgr);

    return 0;
}