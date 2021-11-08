#include "TargetGenerator.hpp"



TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
    std::vector<ATarget *>::iterator itb = arr.begin();
    std::vector<ATarget *>::iterator ite = arr.end();

    while(itb != ite)
    {
        delete *itb;
        ++itb;
    }
    arr.clear();
}

void TargetGenerator::learnTargetType(ATarget *ptr_target) // выучить
{
    std::vector<ATarget *>::iterator itb = arr.begin();
    std::vector<ATarget *>::iterator ite = arr.end();

    if (ptr_target)
    {
        while(itb != ite)
        {
            if ((*itb)->getType() == ptr_target->getType())
                return ;
            ++itb;
        }
        arr.push_back(ptr_target->clone());
    }
}

void TargetGenerator::forgetTargetType(std::string const &name) // забыть
{
    std::vector<ATarget *>::iterator itb = arr.begin();
    std::vector<ATarget *>::iterator ite = arr.end();

    while(itb != ite)
    {
        if((*itb)->getType() == name)
        {
            delete *itb;
            arr.erase(itb);
            return ;
        }
        ++itb;
    }
}

ATarget* TargetGenerator::createTarget(std::string const &name)
{
    std::vector<ATarget *>::iterator itb = arr.begin();
    std::vector<ATarget *>::iterator ite = arr.end();

    while(itb != ite)
    {
        if ((*itb)->getType() == name)
        {
            return (*itb); ////// (*itb)
        }
        ++itb;
    }
    return (NULL);
}





/////////////////
