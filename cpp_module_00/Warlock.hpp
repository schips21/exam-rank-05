#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class Warlock{
private:
    std::string name;
    std::string title;
    Warlock();
    Warlock(Warlock const & rhs);
    Warlock & operator=(Warlock const & rhs);
public:
    Warlock(const std::string & new_name, const std::string & new_title);
    ~Warlock();

    const std::string & getName() const;
    const std::string & getTitle() const;
    void setTitle(const std::string & new_title);
    void introduce() const;
};

#endif