#ifndef INSERTQUERY_H
#define INSERTQUERY_H

#include "Query.h"
#include <string>

class InsertQuery : public Query
{
private:
    std::string* params;
    int numParams;

public:
    InsertQuery(std::string query);
    InsertQuery(std::string* params, int numParams);
    virtual ~InsertQuery();
    virtual QueryResponse* operator()(Database& db);
    virtual bool operator!=(const Database& db) const;
    virtual operator std::string() const;
};

#endif