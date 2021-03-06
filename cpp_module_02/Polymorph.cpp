#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter"){

}

Polymorph::Polymorph(Polymorph const & rhs){
    *this = rhs;
}

Polymorph & Polymorph::operator=(Polymorph const & rhs) {
    this->name = rhs.name;
    this->effects = rhs.effects;
    return *this;
}

Polymorph::~Polymorph(){

}

ASpell* Polymorph::clone() const{
    ASpell* new_spell = new Polymorph(*this);
    return new_spell;
}