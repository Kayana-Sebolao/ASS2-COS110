#ifndef REMOVEQUERY_H
#define REMOVEQUERY_H

#include "Query.h"
#include <string>

class RemoveQuery : public Query
{
private:
    std::string column;
    std::string value;

public:
    RemoveQuery(std::string query);
    virtual ~RemoveQuery();
    virtual QueryResponse* operator()(Database& db);
    virtual bool operator!=(const Database& db) const;
    virtual operator std::string() const;
};

#endif