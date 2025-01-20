#include <iostream>
#include <vector>
#include <cstdint>

class MapMgr
{
private:
    std::vector<std::vector<char16_t>> _map;
    static constexpr int _mapHeight = 9;
    static constexpr int _mapWidth = 15;

public:
    MapMgr() = default;
    MapMgr(const MapMgr& rCopyObject) = delete;
    virtual ~MapMgr() = default;

    void renderMap();
    void renderCursor();
    void renderMarks();
};