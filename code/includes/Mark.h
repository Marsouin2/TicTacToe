#include <cstdint>

class Mark
{
private:
    uint16_t _positionX;
    uint16_t _positionY;
    char *_markShape = new char[2];

public:
    Mark(const uint16_t &rPositionX, const uint16_t &rPositionY, const char *rMarkShape) :
         _positionX(rPositionX), _positionY(rPositionY), _markShape(*rMarkShape) {};
    virtual ~Mark();
};