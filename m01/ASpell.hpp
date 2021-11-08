#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell();
        virtual ~ASpell();

        ASpell(std::string const &new_name, std::string const &new_effects);

        ASpell(ASpell const &orig);
        ASpell &operator=(ASpell const &orig);

        std::string const &getName() const;
        std::string const &getEffects() const;

        virtual ASpell *clone() const = 0;

        void launch(ATarget const &ref) const;

};



// #pragma once

// #include <iostream>
// #include "ATarget.hpp"

// class ATarget;

// class ASpell
// {
//     private:
//         std::string name;
//         std::string effects;

//     public:
//         ASpell();
//         virtual ~ASpell(); // virtual

//         ASpell(std::string const &new_name, std::string const &new_effects);

//         ASpell(ASpell const &orig);
//         ASpell &operator=(ASpell const &orig);

//         std::string const &getName() const;
//         std::string const &getEffects() const;

//         void introduce() const;

// ///////////

//         virtual ASpell *clone() const = 0; // чисто-виртуальный метод
//         // ATarget &(Aspell);
//         void launch(ATarget const &atarget_ref) const;
// };
