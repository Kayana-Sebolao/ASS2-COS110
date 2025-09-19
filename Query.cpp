#include "Query.h"
#include "Database.h"

Column* Query::getColumn(Database& db, std::string column) const {
    return NULL;
}

Column**& Query::getColumns(Database& db) const {
    return db.columns;
}

int Query::getNumberOfColumns(const Database& db) const {
    return 0;
}

std::string Query::getDatabase(const Database& db) const {
    return "";
}

Query::~Query() {
}

std::ostream& operator<<(std::ostream& out, const Query& q) {
    return out;
}