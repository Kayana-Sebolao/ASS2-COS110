#include "UpdateQuery.h"
#include "Database.h"

UpdateQuery::UpdateQuery(std::string query) {
}

UpdateQuery::~UpdateQuery() {
}

QueryResponse* UpdateQuery::operator()(Database& db) {
    return NULL;
}

bool UpdateQuery::operator!=(const Database& db) const {
    return false;
}

UpdateQuery::operator std::string() const {
    return "";
}