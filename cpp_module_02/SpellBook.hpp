#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"

class SpellBook{
private:
    std::vector<ASpell*> book;

    SpellBook(SpellBook const & rhs);
    SpellBook & operator=(SpellBook const & rhs);
public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell* spell);
    void forgetSpell(std::string const & name);
    ASpell* createSpell(std::string const & name);
};

#endif