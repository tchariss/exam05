#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    private:
        std::string type;

    public:
        ATarget();
        virtual ~ATarget();

        ATarget(std::string const &new_type);

        ATarget(ATarget const &orig);
        ATarget &operator=(ATarget const &orig);

        std::string const &getType() const;
        virtual ATarget *clone() const = 0;

        void getHitBySpell(ASpell const &ref) const;
///     

};



// class ASpell;

// class ATarget
// {
//     private:
//         std::string type; // type
        
//     public:
//         ATarget();
//         virtual ~ATarget(); // virtual
//         ATarget(std::string const &new_type);

//         ATarget(ATarget const &orig);
//         ATarget &operator=(ATarget const &orig);

// //////////

//         std::string const &getType() const;

//         virtual ATarget *clone() const = 0; // чисто-виртуальный метод
//         // void getHitBySpell(const &Aspell);
        
//         void getHitBySpell(ASpell const &aspell_ref) const;
// };
