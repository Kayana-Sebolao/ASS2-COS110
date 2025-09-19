#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>
#include <string>

class Element
{
protected:
    virtual std::ostream& print(std::ostream& out) const = 0;

public:
    virtual ~Element();
    virtual bool operator==(const std::string& data) const = 0;
    bool operator!=(std::string& data);
    friend std::ostream& operator<<(std::ostream& out, const Element& el);
    virtual void operator()(const std::string& data) = 0;
    virtual operator std::string() const = 0;
};

#endif