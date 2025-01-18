#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

class Player
{
private:
    std::string _playerName;
public:
    Player(const std::string rNewPlayerName) : _playerName(rNewPlayerName) { std::cout << "Hello " << _playerName << std::endl; };
    virtual ~Player() { _playerName.clear(); };
    const std::string getPlayerName(void) const { return _playerName; };
    void setPlayerName(const std::string rNewPlayerName) { _playerName = rNewPlayerName; };
    void test(void);
};

#endif /* PLAYER_H */