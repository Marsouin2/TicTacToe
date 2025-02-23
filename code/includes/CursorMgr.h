#include <iostream>
#include <vector>
#include <cstdint>

struct Position
{
    uint16_t _posX;
    uint16_t _posY;

    Position(const uint16_t posX = 1, const uint16_t posY = 2) : _posX(posX), _posY(posY) {}
    uint16_t getPosX(void) const { return _posX; };
    uint16_t getPosY(void) const { return _posY; };
    void setPosX(const uint16_t rNewPosX) { _posX = rNewPosX; };
    void setPosY(const uint16_t rNewPosY) { _posY = rNewPosY; };
};

class CursorMgr
{
private:
    Position _cursorPosition;

public:
    CursorMgr(void) : _cursorPosition(1, 2) {};
    virtual ~CursorMgr() = default;
    bool cursorGoRightIfPossible(Position &rCursorPosition);
    Position getCursorPosition(void) const { return _cursorPosition; };
};