#pragma once

#include <iostream>
#include "ASpell.hpp"
// #include "ATarget.hpp"
#include <vector>

class SpellBook
{
    private:
        // std::string name;
        // std::string title;
        // SpellBook();

        SpellBook(SpellBook const &orig);
        SpellBook &operator=(SpellBook const &orig);

        std::vector<ASpell *> arr;

    public:
        SpellBook();
        ~SpellBook();

/////////////////
        void learnSpell(ASpell *ptr_Aspell); // выучить
        void forgetSpell(std::string const &spell_name); // забыть
        ASpell* createSpell(std::string const &spell_name);
        // использовать
};
