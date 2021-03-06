#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed"){

}

Fwoosh::Fwoosh(Fwoosh const & rhs){
    *this = rhs;
}

Fwoosh & Fwoosh::operator=(Fwoosh const & rhs) {
    this->name = rhs.name;
    this->effects = rhs.effects;
    return *this;
}

Fwoosh::~Fwoosh(){

}

ASpell* Fwoosh::clone() const{
    ASpell* new_spell = new Fwoosh(*this);
    return new_spell;
}