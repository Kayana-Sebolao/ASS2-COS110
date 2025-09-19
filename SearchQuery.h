#ifndef SEARCHQUERY_H
#define SEARCHQUERY_H

#include "Query.h"
#include <string>

class SearchQuery : public Query
{
private:
    std::string column;
    std::string value;

public:
    SearchQuery(std::string query);
    virtual ~SearchQuery();
    virtual QueryResponse* operator()(Database& db);
    virtual bool operator!=(const Database& db) const;
    virtual operator std::string() const;
};

#endif