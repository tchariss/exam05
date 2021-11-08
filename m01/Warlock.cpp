#include "Warlock.hpp"

Warlock::Warlock(std::string const &new_name, std::string const &new_title)
{
    name = new_name;
    title = new_title;
    std::cout << name << ": This looks like another boring day." << std::endl;
}


Warlock::~Warlock() // clear
{
    std::cout << name << ": My job here is done!" << std::endl;

    // std::vector<ASpell *>::iterator itb = arr.begin();
    // std::vector<ASpell *>::iterator ite = arr.end();

    // while(itb != ite)
    // {
    //     delete *itb;
    //     ++itb;
    // }
    // arr.clear();
}

std::string const &Warlock::getName() const
{
    return(name);
}

std::string const &Warlock::getTitle() const
{
    return(title);
}

void Warlock::setTitle(std::string const &new_title)
{
    title = new_title;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

/////////////////

void Warlock::learnSpell(ASpell *ptr_Aspell) // Выучить заклинание
{ // Выучить заклинание
    std::vector<ASpell *>::iterator itb = arr.begin();
    std::vector<ASpell *>::iterator ite = arr.end();

    if(ptr_Aspell)
    {
        while(itb != ite)
        {
            if ((*itb)->getName() == ptr_Aspell->getName())
            {
                return ;
            }
            ++itb;
        }
        arr.push_back(ptr_Aspell->clone());
    }
}

void Warlock::forgetSpell(std::string spell_name)
{ // Забыть заклинание
// erase - стереть элемент по индексу

    std::vector<ASpell *>::iterator itb = arr.begin();
    std::vector<ASpell *>::iterator ite = arr.end();

    while(itb != ite)
    {
        if((*itb)->getName() == spell_name)
        {
            delete *itb;
            arr.erase(itb);
            return ; /////
        }
        ++itb;
    }
}

void Warlock::launchSpell(std::string spell_name, ATarget const &ref_Atagret)
{ // Запустить заклинание
    std::vector<ASpell *>::iterator itb = arr.begin();
    std::vector<ASpell *>::iterator ite = arr.end();

    while(itb != ite)
    {
        if ((*itb)->getName() == spell_name)
        {
            (*itb)->launch(ref_Atagret);
            return ;
        }
        ++itb;
    }
}



