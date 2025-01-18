#include "../includes/GameMgr.h"

GameMgr::GameMgr(void) : _playerOne(""), _playerTwo("")
{

}

void GameMgr::runGame()
{
    askAndStoreForPlayerNames();
    // who starts first ?

    while (true) // boucle de gameplay
    {
        // render map
        // take players input
        // check every time a player plays if it wins
        // Endgame message
    }
}

void GameMgr::askAndStoreForPlayerNames(void)
{
    //SingletonInputMgr *tempoSingleton = 
    const std::pair<std::string, std::string> playersName = SingletonInputMgr::getInstance()->askAndGetPlayerName();

    _playerOne.setPlayerName(playersName.first);
    _playerTwo.setPlayerName(playersName.second);

    std::cout << "Great ! Hello " << _playerOne.getPlayerName() << " and "
              << _playerTwo.getPlayerName() << ", I hope you are ready to play because the game is going to start. But first, let's see who will play first..." 
              << std::endl;
}
