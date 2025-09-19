#include "RemoveQuery.h"
#include "Database.h"

RemoveQuery::RemoveQuery(std::string query) {
}

RemoveQuery::~RemoveQuery() {
}

QueryResponse* RemoveQuery::operator()(Database& db) {
    return NULL;
}

bool RemoveQuery::operator!=(const Database& db) const {
    return false;
}

RemoveQuery::operator std::string() const {
    return "";
}