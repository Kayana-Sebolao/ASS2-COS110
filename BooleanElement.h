#ifndef BOOLEANELEMENT_H
#define BOOLEANELEMENT_H

#include "Element.h"
#include <string>

class BooleanElement : public Element
{
private:
    bool data;
    static bool convert(std::string str);
    virtual std::ostream& print(std::ostream& out) const;

public:
    BooleanElement(std::string data);
    virtual bool operator==(const std::string& data) const;
    virtual void operator()(const std::string& data);
    virtual operator std::string() const;
};

#endif