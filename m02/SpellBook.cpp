#include "SpellBook.hpp"



SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
    std::vector<ASpell *>::iterator itb = arr.begin();
    std::vector<ASpell *>::iterator ite = arr.end();

    while(itb != ite)
    {
        delete *itb;
        ++itb;
    }
    /////////
    arr.clear();
}


/////////////////

void SpellBook::learnSpell(ASpell *ptr_Aspell) // Выучить заклинание
{ // Выучить заклинание
    std::vector<ASpell *>::iterator itb = arr.begin();
    std::vector<ASpell *>::iterator ite = arr.end();

    if (ptr_Aspell)
    {
        while(itb != ite)
        {
            if ((*itb)->getName() == ptr_Aspell->getName())
            {
                return ;
            }
            itb++;
        }
        arr.push_back(ptr_Aspell->clone()); // clone !
    }
}

void SpellBook::forgetSpell(std::string const &spell_name)
{ // Забыть заклинание
// erase - стереть элемент по индексу

    std::vector<ASpell *>::iterator itb = arr.begin();
    std::vector<ASpell *>::iterator ite = arr.end();

    while(itb != ite)
    {
        if ((*itb)->getName() == spell_name)
        {
            delete *itb;
            arr.erase(itb);
            return ;
        }
        ++itb;
    }
}

ASpell *SpellBook::createSpell(std::string const &spell_name)
{ // Запустить заклинание
    std::vector<ASpell *>::iterator itb = arr.begin();
    std::vector<ASpell *>::iterator ite = arr.end();

    while(itb != ite)
    {
        if ((*itb)->getName() == spell_name)
        {
            return (*itb); //// *itb
        }
        ++itb;
    }
    return (NULL);
}
