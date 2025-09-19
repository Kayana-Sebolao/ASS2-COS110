#ifndef REALVALUECOLUMN_H
#define REALVALUECOLUMN_H

#include "Column.h"
#include "RealElement.h"

class RealValueColumn : public Column
{
private:
    RealElement** array;

public:
    RealValueColumn(std::string columnName, int columnSize);
    virtual ~RealValueColumn();
    virtual RealValueColumn* clone() const;
    virtual RealValueColumn& operator+=(std::string data);
    virtual RealValueColumn& operator-=(std::string data);
    virtual RealValueColumn& operator-=(int index);
    virtual int operator()(std::string data) const;
    virtual RealValueColumn& operator()(std::string value, std::string newValue);
    virtual RealElement const* operator[](int pos) const;
    virtual RealElement const* operator[](std::string value) const;
    virtual bool operator!() const;
};

#endif