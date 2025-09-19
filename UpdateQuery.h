#ifndef UPDATEQUERY_H
#define UPDATEQUERY_H

#include "Query.h"
#include <string>

class UpdateQuery : public Query
{
private:
    std::string column;
    std::string value;
    std::string oldvalue;

public:
    UpdateQuery(std::string query);
    virtual ~UpdateQuery();
    virtual QueryResponse* operator()(Database& db);
    virtual bool operator!=(const Database& db) const;
    virtual operator std::string() const;
};

#endif