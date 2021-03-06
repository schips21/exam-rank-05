#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"


class Polymorph : public ASpell{
public:
    Polymorph();
    Polymorph(Polymorph const & rhs);
    Polymorph & operator=(Polymorph const & rhs);
    virtual ~Polymorph();

    ASpell* clone() const;
};

#endif