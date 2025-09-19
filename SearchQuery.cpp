#include "SearchQuery.h"
#include "Database.h"

SearchQuery::SearchQuery(std::string query) {
}

SearchQuery::~SearchQuery() {
}

QueryResponse* SearchQuery::operator()(Database& db) {
    return NULL;
}

bool SearchQuery::operator!=(const Database& db) const {
    return false;
}

SearchQuery::operator std::string() const {
    return "";
}