#include "../includes/SingletonInputMgr.h"

SingletonInputMgr* _instance = nullptr; // j'aime pas, faut regarder pour mieux faire

SingletonInputMgr* SingletonInputMgr::getInstance(void)
{
    if (_instance == nullptr)
    {
        _instance = new SingletonInputMgr();
    }

    return _instance;
}

const std::pair<std::string, std::string> SingletonInputMgr::askAndGetPlayerName(void)
{
    std::pair<std::string, std::string> retVal;

    std::cout << "What is the name of the first player ?" << std::endl;
    std::cin >> retVal.first;

    std::cout << "What is the name of the second player ?" << std::endl;
    std::cin >> retVal.second;

    return retVal;
}