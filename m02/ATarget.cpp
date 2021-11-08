#include "ATarget.hpp"

ATarget::ATarget()
{
}

ATarget::~ATarget()
{
}

ATarget::ATarget(std::string const &new_type)
{
    type = new_type;
}

ATarget::ATarget(ATarget const &orig)
{
    *this = orig;
}

ATarget &ATarget::operator=(ATarget const &orig)
{
    type = orig.type;
    return (*this);
}

std::string const &ATarget::getType() const
{
    return(type);
}

///////

void ATarget::getHitBySpell(ASpell const &aspell_ref) const
{
    std::cout << type << " has been " << aspell_ref.getEffects() << std::endl;
}
