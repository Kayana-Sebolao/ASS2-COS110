#ifndef INTEGERCOLUMN_H
#define INTEGERCOLUMN_H

#include "Column.h"
#include "IntegerElement.h"

class IntegerColumn : public Column
{
private:
    IntegerElement** array;

public:
    IntegerColumn(std::string columnName, int columnSize);
    virtual ~IntegerColumn();
    virtual IntegerColumn* clone() const;
    virtual IntegerColumn& operator+=(std::string data);
    virtual IntegerColumn& operator-=(std::string data);
    virtual IntegerColumn& operator-=(int index);
    virtual int operator()(std::string data) const;
    virtual IntegerColumn& operator()(std::string value, std::string newValue);
    virtual IntegerElement const* operator[](int pos) const;
    virtual IntegerElement const* operator[](std::string value) const;
    virtual bool operator!() const;
};

#endif