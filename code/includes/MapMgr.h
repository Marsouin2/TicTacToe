#include <iostream>
#include <vector>
#include <cstdint>

class MapMgr
{
private:
    std::vector<std::vector<char16_t> > _map;
    int _mapHeight;
    int _mapWidth;

public:
    MapMgr(const int &rMapHeight, const int &rMapWidth) : _mapHeight(rMapHeight), _mapWidth(rMapWidth) {};
    MapMgr(const MapMgr& rCopyObject) = delete;
    virtual ~MapMgr() = default;

    void renderMap();
    void renderCursor();
    void renderMarks();
};