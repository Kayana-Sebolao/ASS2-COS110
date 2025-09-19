#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <fstream>
#include <string>
#include "Column.h"
#include "Query.h"
#include "QueryResponse.h"

class Database
{
private:
    int numColumns;
    std::string databaseName;
    Column** columns;
    Database();
    Database& operator<<(std::string str);

public:
    ~Database();
    Database(const Database& other);
    static Database* buildFromSchema(std::string schema, std::string name = "Database");
    static Database* buildFromFile(std::string schema, std::string fileName, char delimiter = ',', std::string name = "Database");
    QueryResponse* processQuery(Query* query);
    Database& operator=(const Database& other);
    Database& operator+=(const Column* col);
    Database operator+(const Column* col) const;
    Database& operator-=(const Column* col);
    Database operator-(const Column* col) const;
    Database& operator+=(std::string line);
    Database operator+(std::string line) const;
    const Column* operator[](int column) const;
    const Column* operator[](std::string column) const;
    Column* operator[](int column);
    Column* operator[](std::string column);
    const bool operator[](const Column& column) const;
    bool operator!() const;
    bool operator==(const Database& other) const;
    bool operator!=(const Query& query) const;
    friend std::ostream& operator<<(std::ostream& out, const Database& db);
    friend std::ofstream& operator<<(std::ofstream& out, const Database& db);
    friend std::ifstream& operator>>(std::ifstream& in, Database& db);

    friend class Query;
};

#endif