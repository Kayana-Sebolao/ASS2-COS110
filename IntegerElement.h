#ifndef INTEGERELEMENT_H
#define INTEGERELEMENT_H

#include "Element.h"
#include <string>

class IntegerElement : public Element
{
private:
    int data;
    int convert(std::string str);
    virtual std::ostream& print(std::ostream& out) const;

public:
    IntegerElement(std::string data);
    virtual bool operator==(const std::string& data) const;
    virtual void operator()(const std::string& data);
    virtual operator std::string() const;
};

#endif