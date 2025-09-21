#ifndef REALELEMENT_H
#define REALELEMENT_H

#include "Element.h"
#include <string>

class RealElement : public Element
{
private:
    float data;
    static float convert(std::string str);
    virtual std::ostream& print(std::ostream& out) const;

public:
    RealElement(std::string data);
    virtual bool operator==(const std::string& data) const;
    virtual void operator()(const std::string& data);
    virtual operator std::string() const;
};

#endif