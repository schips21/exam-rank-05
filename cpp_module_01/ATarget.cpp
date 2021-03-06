#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(const std::string & new_type){
    this->type = new_type;

}

ATarget::ATarget(ATarget const & rhs){
    *this = rhs;
}

ATarget & ATarget::operator=(ATarget const & rhs){
    this->type = rhs.type;
    return *this;
}

ATarget::~ATarget(){

}

const std::string & ATarget::getType() const{
    return  type;
}

void ATarget::getHitBySpell(const ASpell & spell) const{
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}