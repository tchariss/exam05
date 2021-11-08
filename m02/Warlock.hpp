#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "SpellBook.hpp"
#include "ATarget.hpp"
#include <vector>

class Warlock
{
    private:
        std::string name;
        std::string title;

        Warlock();
        Warlock(Warlock const &orig);
        Warlock &operator=(Warlock const &orig);

        // std::vector<ASpell *> arr;
///////////
        SpellBook book;

    public:
        ~Warlock();
        Warlock(std::string const &new_name, std::string const &new_title);

        std::string const &getName() const;
        std::string const &getTitle() const;

        void setTitle(std::string const &new_title);

        void introduce() const;

/////////////////
        void learnSpell(ASpell *ptr_Aspell); // выучить
        void forgetSpell(std::string spell_name); // забыть
        void launchSpell(std::string spell_name, ATarget const &ref_Atagret);
        // использовать
};
