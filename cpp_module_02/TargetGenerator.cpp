#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::TargetGenerator(TargetGenerator const & rhs){
    *this = rhs;
}

TargetGenerator & TargetGenerator::operator=(TargetGenerator const & rhs){
    (void)rhs;
    return *this;
}

TargetGenerator::~TargetGenerator(){
    my_targets.clear();
}

void TargetGenerator::learnTargetType(ATarget* target){
    my_targets.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(std::string const & name){
    for(std::vector<ATarget*>::iterator it = my_targets.begin(); it < my_targets.end(); it++){
        if ((*it)->getType() == name){
            delete *it;
            my_targets.erase(it);
        }
    }
}

ATarget* TargetGenerator::createTarget(std::string const & name){
    for(std::vector<ATarget*>::iterator it = my_targets.begin(); it < my_targets.end(); it++){
        if ((*it)->getType() == name){
            return (*it);
        }
    }
    return NULL;
}