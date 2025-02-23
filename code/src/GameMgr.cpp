#include "../includes/GameMgr.h"

// Define and initialize static member
bool GameMgr::_bThereIsAWinner = true;

GameMgr::GameMgr() : _playerOne("empty", '|'), _playerTwo("empty", '|'), _mapMgr(11, 15)
{
    //SingletonSignalHandler::getInstance(this);
    _bThereIsAWinner = false;
    std::signal(SIGINT, GameMgr::signalHandler); // Register signal handler
}

void GameMgr::signalSigintHandler(int signal)
{
    std::cout << "Signal sigint with " << signal << std::endl;
    _bThereIsAWinner = true;
}

GameMgr::~GameMgr() {}

void GameMgr::runGame()
{
    askAndStoreForPlayerNames();
    getGameStartingPlayer();

    while (!_bThereIsAWinner) // boucle de gameplay
    {
	    _mapMgr.actualizeAndRenderMap(); // render map
        // wait until player input to render again
        // take players input
        // check every time a player plays if it wins
        // Endgame message
	    //bThereIsAWinner = true;

        // DO SOMETHING TO CUT OFF THE GAME : catch ctrl-c to stop the game
    }
}

int GameMgr::generateRandomDiceOfSixNumber(void)
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> distrib(Randomizer::LOWEST_VALUE_FOR_DICE_OF_SIX, 
                                            Randomizer::HIGHEST_VALUE_FOR_DICE_OF_SIX);

    return distrib(gen);
}

void GameMgr::getGameStartingPlayer(void)
{
    const int iPlayerFirstDiceScore = generateRandomDiceOfSixNumber();
    const int iPlayerTwoDiceScore = generateRandomDiceOfSixNumber();

    std::cout << _playerOne.getPlayerName() << " rolls the dice : ";
    std::cout << iPlayerFirstDiceScore << std::endl;

    std::cout << _playerTwo.getPlayerName() << " rolls the dice : ";
    std::cout << iPlayerTwoDiceScore << std::endl;

    if (iPlayerFirstDiceScore == iPlayerTwoDiceScore)
    {
	std::cout << "Ooops : you've made the same result. Let's roll again !" << std::endl;
        getGameStartingPlayer();
    }
    else if (iPlayerFirstDiceScore > iPlayerTwoDiceScore)
    {
        std::cout << _playerOne.getPlayerName() << " starts !" << std::endl;
    }
    else // means iPlayerFirstDiceScore < iPlayerTwoDiceScore
    {
        std::cout << _playerTwo.getPlayerName() << " starts !" << std::endl;
    }
}

void GameMgr::askAndStoreForPlayerNames(void)
{
    //SingletonInputMgr *tempoSingleton = 
    const std::pair<std::string, std::string> playersName = SingletonInputMgr::getInstance()->askAndGetPlayerName();

    _playerOne.setPlayerName(playersName.first);
    _playerTwo.setPlayerName(playersName.second);

    std::cout << "Great ! Hello " << _playerOne.getPlayerName() << " and "
              << _playerTwo.getPlayerName() << ", I hope you are ready to play because the game is going to start. \nBut first, let's see who will play first..." 
              << std::endl;
}
