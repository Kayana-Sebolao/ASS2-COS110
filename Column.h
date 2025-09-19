#ifndef COLUMN_H
#define COLUMN_H

#include <string>
#include "Element.h"

class Column
{
protected:
    std::string columnName;
    int columnSize;
    Column(std::string columnName = "", int columnSize = 0);

public:
    static Column* createColumnFromSchema(std::string schema);
    operator int() const;
    operator std::string() const;
    bool operator==(const Column& other) const;
    bool operator!=(const Column& other) const;
    virtual ~Column();
    virtual Column* clone() const = 0;
    virtual Column& operator+=(std::string data) = 0;
    virtual Column& operator-=(std::string data) = 0;
    virtual Column& operator-=(int index) = 0;
    virtual int operator()(std::string data) const = 0;
    virtual Column& operator()(std::string value, std::string newValue) = 0;
    virtual Element const* operator[](int pos) const = 0;
    virtual Element const* operator[](std::string value) const = 0;
    virtual bool operator!() const = 0;
};

#endif