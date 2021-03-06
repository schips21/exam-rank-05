#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"
class ASpell;

class ATarget{
protected:
    std::string type;
public:
    ATarget();
    ATarget(const std::string & new_type);
    ATarget(ATarget const & rhs);
    ATarget & operator=(ATarget const & rhs);
    virtual ~ATarget();

    const std::string & getType() const;
    virtual ATarget* clone() const = 0;

    void getHitBySpell(const ASpell & spell) const;
};

#endif