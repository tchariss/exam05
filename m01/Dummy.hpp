#pragma once

#include "ATarget.hpp"
#include <iostream>

class Dummy : public ATarget
{

    public:
        Dummy();
        ~Dummy(); // virtual

///////////
        virtual ATarget *clone() const;
};
