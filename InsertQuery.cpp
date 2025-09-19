#include "InsertQuery.h"
#include "Database.h"

InsertQuery::InsertQuery(std::string query) : params(NULL), numParams(0) {
}

InsertQuery::InsertQuery(std::string* params, int numParams) : params(NULL), numParams(0) {
}

InsertQuery::~InsertQuery() {
}

QueryResponse* InsertQuery::operator()(Database& db) {
    return NULL;
}

bool InsertQuery::operator!=(const Database& db) const {
    return false;
}

InsertQuery::operator std::string() const {
    return "";
}