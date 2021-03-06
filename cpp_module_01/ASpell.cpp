#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(const std::string & new_name, const std::string & new_effects){
    this->name = new_name;
    this->effects = new_effects;

}

ASpell::ASpell(ASpell const & rhs){
    *this = rhs;
}

ASpell & ASpell::operator=(ASpell const & rhs){
    this->name = rhs.name;
    this->effects = rhs.effects;
    return *this;
}

ASpell::~ASpell(){

}

std::string ASpell::getName() const{
    return name;
}

std::string ASpell::getEffects() const{
    return effects;
}


void ASpell::launch(const ATarget & targ){
    targ.getHitBySpell(*this);
}