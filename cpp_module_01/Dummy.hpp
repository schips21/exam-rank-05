#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <iostream>
#include <vector>
#include "ATarget.hpp"


class Dummy : public ATarget{
public:
    Dummy();
    Dummy(Dummy const & rhs);
    Dummy & operator=(Dummy const & rhs);
    virtual ~Dummy();

    ATarget* clone() const;
};

#endif