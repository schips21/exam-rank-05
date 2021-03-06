#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(Warlock const & rhs){
    *this = rhs;
}

Warlock & Warlock::operator=(Warlock const & rhs){
    this->name = rhs.name;
    this->title = rhs.title;
    return *this;
}

Warlock::Warlock(const std::string & new_name, const std::string & new_title){
    this->name = new_name;
    this->title = new_title;
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
    known_spells.clear();
    std::cout << this->name << ": My job here is done!" << std::endl;
}

const std::string & Warlock::getName() const{
    return this->name;
}

const std::string & Warlock::getTitle() const{
    return this->title;
}

void Warlock::setTitle(const std::string & new_title){
    this->title = new_title;
}

void Warlock::introduce() const{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell * spell){
    this->known_spells.push_back(spell->clone());
}
void Warlock::forgetSpell(std::string name){
    for(std::vector<ASpell*>::iterator it = known_spells.begin(); it < known_spells.end(); it++){
        if ((*it)->getName() == name){
            delete *it;
            known_spells.erase(it);
        }
    }
}

void Warlock::launchSpell(std::string name, ATarget & target){
    for(std::vector<ASpell*>::iterator it = known_spells.begin(); it < known_spells.end(); it++){
        if ((*it)->getName() == name){
            (*it)->launch(target);
        }
    }
}