#include <cstdint>

class Mark
{
private:
    uint16_t _positionX;
    uint16_t _positionY;
    //cchar _markShape;

public:
    /*Mark(const uint16_t &rPositionX, const uint16_t &rPositionY, const char rMarkShape) :
         _positionX(rPositionX), _positionY(rPositionY), _markShape(rMarkShape) {};*/
    Mark() = default;
    virtual ~Mark();
};
