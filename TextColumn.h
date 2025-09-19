#ifndef TEXTCOLUMN_H
#define TEXTCOLUMN_H

#include "Column.h"
#include "TextElement.h"

class TextColumn : public Column
{
private:
    TextElement** array;

public:
    TextColumn(std::string columnName, int columnSize);
    virtual ~TextColumn();
    virtual TextColumn* clone() const;
    virtual TextColumn& operator+=(std::string data);
    virtual TextColumn& operator-=(std::string data);
    virtual TextColumn& operator-=(int index);
    virtual int operator()(std::string data) const;
    virtual TextColumn& operator()(std::string value, std::string newValue);
    virtual TextElement const* operator[](int pos) const;
    virtual TextElement const* operator[](std::string value) const;
    virtual bool operator!() const;
};

#endif