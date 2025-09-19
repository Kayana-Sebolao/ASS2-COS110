#ifndef QUERY_H
#define QUERY_H

#include <iostream>
#include <string>
#include "QueryResponse.h"
#include "Column.h"

class Database;

class Query
{
protected:
    Column* getColumn(Database& db, std::string column) const;
    Column**& getColumns(Database& db) const;
    int getNumberOfColumns(const Database& db) const;
    std::string getDatabase(const Database& db) const;

public:
    virtual ~Query();
    virtual QueryResponse* operator()(Database& db) = 0;
    virtual bool operator!=(const Database& db) const = 0;
    virtual operator std::string() const = 0;
    friend std::ostream& operator<<(std::ostream& out, const Query& q);
};

#endif