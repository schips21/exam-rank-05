#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"
class ATarget;


class ASpell{
protected:
    std::string name;
    std::string effects;

public:
    ASpell();
    ASpell(const std::string & new_name, const std::string & new_effects);
    ASpell(ASpell const & rhs);
    ASpell & operator=(ASpell const & rhs);
    virtual ~ASpell();

    std::string getName() const;
    std::string getEffects() const;
    virtual ASpell* clone() const = 0;

    void launch(const ATarget & targ);
};

#endif