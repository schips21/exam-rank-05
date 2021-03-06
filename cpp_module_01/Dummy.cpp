#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy"){

}

Dummy::Dummy(Dummy const & rhs){
    *this = rhs;
}

Dummy & Dummy::operator=(Dummy const & rhs) {
    this->type = rhs.type;
    return *this;
}

Dummy::~Dummy(){

}

ATarget* Dummy::clone() const{
    ATarget* new_targ = new Dummy(*this);
    return new_targ;
}