#ifndef CHARACTERELEMENT_H
#define CHARACTERELEMENT_H

#include "Element.h"
#include <string>

class CharacterElement : public Element
{
private:
    char data;
    char convert(std::string str);
    virtual std::ostream& print(std::ostream& out) const;

public:
    CharacterElement(std::string data);
    virtual bool operator==(const std::string& data) const;
    virtual void operator()(const std::string& data);
    virtual operator std::string() const;
};

#endif