
#pragma once

#include "ASpell.hpp"
#include <iostream>

class Polymorph : public ASpell
{   
    // private:
        // std::string target;
    public:
        Polymorph();
        ~Polymorph();

        virtual ASpell *clone() const;
};
