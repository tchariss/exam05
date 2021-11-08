#include "ASpell.hpp"


ASpell::ASpell()
{
}

ASpell::~ASpell()
{
}

ASpell::ASpell(std::string const &new_name, std::string const &new_effects)
{
    name = new_name;
    effects = new_effects;
}

ASpell::ASpell(ASpell const &orig)
{
    *this = orig;
}

ASpell &ASpell::operator=(ASpell const &orig)
{
    name = orig.name;
    effects = orig.effects;
    return (*this);
}

std::string const &ASpell::getName() const
{
    return (name);
}

std::string const &ASpell::getEffects() const
{
    return (effects);
    // <TYPE> is the ATarget's type, and <EFFECTS> 
}


// virtual ASpell *clone() const = 0
// {
    
// }


void ASpell::launch(ATarget const &ref) const
{
    ref.getHitBySpell((*this));
}







// ASpell::ASpell()
// {
// }

// ASpell::~ASpell()
// {
// }

// ASpell::ASpell(std::string const &new_name, std::string const &new_effects)
// {
//     name = new_name;
//     effects = new_effects;
//     // std::cout << name << ": This looks like another boring day." << std::endl;
// }

// ASpell::ASpell(ASpell const &orig)
// {
//     *this = orig;
// }

// ASpell &ASpell::operator=(ASpell const &orig)
// {
//     name = orig.name;
//     effects = orig.effects;
//     return (*this);
// }

// std::string const &ASpell::getName() const
// {
//     return(name);
// }

// ////////////

// std::string const &ASpell::getEffects() const
// {
//     return(effects);
// }


// void ASpell::introduce() const
// {
//     std::cout << name << ": I am " << name << ", " << effects << "!" << std::endl;
// }

// ////////////

// void ASpell::launch(ATarget const &atarget_ref) const
// {
//     atarget_ref.getHitBySpell(*this);
// }