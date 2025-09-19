#ifndef BOOLEANCOLUMN_H
#define BOOLEANCOLUMN_H

#include "Column.h"
#include "BooleanElement.h"

class BooleanColumn : public Column
{
private:
    BooleanElement** array;

public:
    BooleanColumn(std::string columnName, int columnSize);
    virtual ~BooleanColumn();
    virtual BooleanColumn* clone() const;
    virtual BooleanColumn& operator+=(std::string data);
    virtual BooleanColumn& operator-=(std::string data);
    virtual BooleanColumn& operator-=(int index);
    virtual int operator()(std::string data) const;
    virtual BooleanColumn& operator()(std::string value, std::string newValue);
    virtual BooleanElement const* operator[](int pos) const;
    virtual BooleanElement const* operator[](std::string value) const;
    virtual bool operator!() const;
};

#endif