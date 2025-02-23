#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

#include "Mark.h"

class Player
{
private:
    std::string _playerName;
    //char _playerMark;

public:
    Player(const std::string &rNewPlayerName, const char &rPlayerMark) : _playerName(rNewPlayerName) { };
    virtual ~Player() { _playerName.clear(); };
    const std::string getPlayerName(void) const { return _playerName; };
    void setPlayerName(const std::string rNewPlayerName) { _playerName = rNewPlayerName; };
    void test(void);
};

#endif /* PLAYER_H */
