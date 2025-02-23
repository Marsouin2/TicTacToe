#include "../includes/CursorMgr.h"

bool CursorMgr::cursorGoRightIfPossible(Position &rCursorPosition)
{
    bool retVal = true;

    // Check if the max right possible position has been reached
    if (_cursorPosition.getPosY() == 12)
    {
        retVal = false;
    }
    else
    {
        _cursorPosition._posX += 5;
        rCursorPosition = _cursorPosition;
    }

    return retVal;
}