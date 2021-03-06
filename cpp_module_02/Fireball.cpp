#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp"){

}

Fireball::Fireball(Fireball const & rhs){
    *this = rhs;
}

Fireball & Fireball::operator=(Fireball const & rhs) {
    this->name = rhs.name;
    this->effects = rhs.effects;
    return *this;
}

Fireball::~Fireball(){

}

ASpell* Fireball::clone() const{
    ASpell* new_spell = new Fireball(*this);
    return new_spell;
}