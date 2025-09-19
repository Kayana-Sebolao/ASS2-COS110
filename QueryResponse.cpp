#include "QueryResponse.h"

QueryResponse::QueryResponse(std::string msg) : message(msg) {
}

std::ostream& operator<<(std::ostream& out, const QueryResponse& response) {
    return out;
}