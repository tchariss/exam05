#pragma once

#include "ATarget.hpp"
#include <iostream>

class BrickWall : public ATarget
{

    public:
        BrickWall();
        ~BrickWall(); // virtual

        virtual ATarget *clone() const;
};
