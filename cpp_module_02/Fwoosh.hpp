#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"


class Fwoosh : public ASpell{
public:
    Fwoosh();
    Fwoosh(Fwoosh const & rhs);
    Fwoosh & operator=(Fwoosh const & rhs);
    virtual ~Fwoosh();

    ASpell* clone() const;
};

#endif