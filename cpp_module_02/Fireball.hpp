#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"


class Fireball : public ASpell{
public:
    Fireball();
    Fireball(Fireball const & rhs);
    Fireball & operator=(Fireball const & rhs);
    virtual ~Fireball();

    ASpell* clone() const;
};

#endif