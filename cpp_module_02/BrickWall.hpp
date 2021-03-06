#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include <iostream>
#include <vector>
#include "ATarget.hpp"


class BrickWall : public ATarget{
public:
    BrickWall();
    BrickWall(BrickWall const & rhs);
    BrickWall & operator=(BrickWall const & rhs);
    virtual ~BrickWall();

    ATarget* clone() const;
};

#endif