#include <iostream>
#include <vector>
#include <cstdint>

#include "CursorMgr.h"

class MapMgr
{
private:
    std::vector<std::vector<char> > _map;
    int _mapHeight;
    int _mapWidth;
    CursorMgr _cursor;

public:
    MapMgr(const int &rMapHeight, const int &rMapWidth) : _mapHeight(rMapHeight), _mapWidth(rMapWidth), _cursor() {};
    MapMgr(const MapMgr& rCopyObject) = delete;
    virtual ~MapMgr() = default;

    void renderMap();
    void renderCursor();
    void renderMarks();
    void constituteMap(void);
    void addCursorToMap(void);
    void actualizeAndRenderMap(void);
};