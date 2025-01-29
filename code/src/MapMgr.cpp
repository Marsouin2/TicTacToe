#include "../includes/MapMgr.h"

void MapMgr::renderMap(void)
{
    for (uint16_t i = 0; i < _mapHeight; ++i)
    {
	std::cout << std::endl;
        for (uint16_t u = 0; u < _mapWidth; ++u)
        {
            if ((3 == i) || (7 == i))
            {
                std::cout << "---------------\n";
            }
            else
            {
                if ((4 == u) || (9 == u))
                {
                    std::cout << '|';
                }
                else
                {
                    std::cout << ' ';
                }
            }
        }
    }
    std::cout << '\n';
}
