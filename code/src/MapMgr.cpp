#include "../includes/MapMgr.h"

void MapMgr::renderMap(void)
{
    for (uint16_t i = 0; i < _mapHeight; ++i)
    {
        for (uint16_t u = 0; u < _mapWidth; ++u)
        {
            if ((i == 3) || (i == 7))
            {
                std::cout << '-';
            }
            else if ((u == 4) || (u == 9))
            {
                std::cout << '|';
            }
            else
            {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}
