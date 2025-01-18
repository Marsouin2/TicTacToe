#ifndef SINGLETON_INPUT_MGR_H
#define SINGLETON_INPUT_MGR_H

#include <iostream>
#include <utility>

class SingletonInputMgr
{
private:
    SingletonInputMgr() = default;
    //static SingletonInputMgr *_instance;

public:
    SingletonInputMgr(const SingletonInputMgr& rCopyClass) = delete;
    void operator=(const SingletonInputMgr& rCopyClass) = delete; // pourquoi ca retourne void et pas la classe ?
    static SingletonInputMgr* getInstance(void);
    const std::pair<std::string, std::string> askAndGetPlayerName(void);
};

#endif /* SINGLETON_INPUT_MGR_H */