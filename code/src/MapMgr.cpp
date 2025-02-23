#include "../includes/MapMgr.h"

void MapMgr::constituteMap(void)
{
    std::vector<char> tempoVector;

    for (uint16_t i = 0; i < _mapHeight; ++i)
    {
        for (uint16_t u = 0; u < _mapWidth -1; ++u)
        {
            if ((i == 3) || (i == 7))
            {
                tempoVector.push_back('-');
                //_map[i][u] = '-';
            }
            else if ((u == 4) || (u == 9))
            {
                tempoVector.push_back('|');
                //_map[i][u] = '|';
            }
            else
            {
                tempoVector.push_back(' ');
                //_map[i][u] = ' ';
            }
        }
        tempoVector.push_back('\n');
        _map.push_back(tempoVector);
        (void)tempoVector.empty();
    }
}

void MapMgr::addCursorToMap(void)
{
    // Get cursor PosX + PosY and set the cursor character to the position
    //_map[_cursor.getCursorPosition().getPosX()][_cursor.getCursorPosition().getPosY()] = '_';
}

void MapMgr::renderMap(void)
{
    for (uint16_t i = 0; i < _mapHeight; ++i)
    {
        for (uint16_t u = 0; u < _mapWidth; ++u)
        {
            std::cout << _map[i][u];
        }
    }

    std::cout << '\n';
}

void MapMgr::actualizeAndRenderMap(void)
{
    constituteMap();
    addCursorToMap();
    renderMap();
}
