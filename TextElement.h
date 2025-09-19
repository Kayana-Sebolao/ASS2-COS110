#ifndef TEXTELEMENT_H
#define TEXTELEMENT_H

#include "Element.h"
#include <string>

class TextElement : public Element
{
private:
    std::string data;
    virtual std::ostream& print(std::ostream& out) const;

public:
    TextElement(std::string data);
    virtual bool operator==(const std::string& data) const;
    virtual void operator()(const std::string& data);
    virtual operator std::string() const;
};

#endif