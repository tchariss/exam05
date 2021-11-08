#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>

class TargetGenerator
{
    private:
        TargetGenerator(TargetGenerator const &orig);
        TargetGenerator &operator=(TargetGenerator const &orig);

        std::vector<ATarget *> arr;

    public:
        TargetGenerator();
        ~TargetGenerator();

/////////////////
        void learnTargetType(ATarget *ptr_Aspell); // выучить
        void forgetTargetType(std::string const &name); // забыть
        // const &name
        ATarget* createTarget(std::string const &name);
        // использовать
};
