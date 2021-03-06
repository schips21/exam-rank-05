#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <iostream>
#include <vector>
#include "ATarget.hpp"

class TargetGenerator{
private:
    std::vector<ATarget*> my_targets;

    TargetGenerator(TargetGenerator const & rhs);
    TargetGenerator & operator=(TargetGenerator const & rhs);
public:
    TargetGenerator();
    ~TargetGenerator();

    void learnTargetType(ATarget* target);
    void forgetTargetType(std::string const & name);
    ATarget* createTarget(std::string const & name);
};

#endif