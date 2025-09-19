#ifndef QUERYRESPONSE_H
#define QUERYRESPONSE_H

#include <iostream>
#include <string>

class QueryResponse
{
private:
    std::string message;

public:
    QueryResponse(std::string msg);
    friend std::ostream& operator<<(std::ostream& out, const QueryResponse& response);
};

#endif