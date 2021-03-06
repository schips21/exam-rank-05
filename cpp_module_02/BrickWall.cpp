#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall"){

}

BrickWall::BrickWall(BrickWall const & rhs){
    *this = rhs;
}

BrickWall & BrickWall::operator=(BrickWall const & rhs) {
    this->type = rhs.type;
    return *this;
}

BrickWall::~BrickWall(){

}

ATarget* BrickWall::clone() const{
    ATarget* new_targ = new BrickWall(*this);
    return new_targ;
}