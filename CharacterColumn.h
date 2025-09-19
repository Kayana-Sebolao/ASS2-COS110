#ifndef CHARACTERCOLUMN_H
#define CHARACTERCOLUMN_H

#include "Column.h"
#include "CharacterElement.h"

class CharacterColumn : public Column
{
private:
    CharacterElement** array;

public:
    CharacterColumn(std::string columnName, int columnSize);
    virtual ~CharacterColumn();
    virtual CharacterColumn* clone() const;
    virtual CharacterColumn& operator+=(std::string data);
    virtual CharacterColumn& operator-=(std::string data);
    virtual CharacterColumn& operator-=(int index);
    virtual int operator()(std::string data) const;
    virtual CharacterColumn& operator()(std::string value, std::string newValue);
    virtual CharacterElement const* operator[](int pos) const;
    virtual CharacterElement const* operator[](std::string value) const;
    virtual bool operator!() const;
};

#endif