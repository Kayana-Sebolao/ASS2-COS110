#include "Database.h"

Database::Database() : numColumns(-1), databaseName("Database"), columns(NULL) {
}

Database& Database::operator<<(std::string str) {
    return *this;
}

Database::~Database() {
}

Database::Database(const Database& other) {
}

Database* Database::buildFromSchema(std::string schema, std::string name) {
    return NULL;
}

Database* Database::buildFromFile(std::string schema, std::string fileName, char delimiter, std::string name) {
    return NULL;
}

QueryResponse* Database::processQuery(Query* query) {
    return NULL;
}

Database& Database::operator=(const Database& other) {
    return *this;
}

Database& Database::operator+=(const Column* col) {
    return *this;
}

Database Database::operator+(const Column* col) const {
    return *this;
}

Database& Database::operator-=(const Column* col) {
    return *this;
}

Database Database::operator-(const Column* col) const {
    return *this;
}

Database& Database::operator+=(std::string line) {
    return *this;
}

Database Database::operator+(std::string line) const {
    return *this;
}

const Column* Database::operator[](int column) const {
    return NULL;
}

const Column* Database::operator[](std::string column) const {
    return NULL;
}

Column* Database::operator[](int column) {
    return NULL;
}

Column* Database::operator[](std::string column) {
    return NULL;
}

const bool Database::operator[](const Column& column) const {
    return false;
}

bool Database::operator!() const {
    return false;
}

bool Database::operator==(const Database& other) const {
    return false;
}

bool Database::operator!=(const Query& query) const {
    return false;
}

std::ostream& operator<<(std::ostream& out, const Database& db) {
    return out;
}

std::ofstream& operator<<(std::ofstream& out, const Database& db) {
    return out;
}

std::ifstream& operator>>(std::ifstream& in, Database& db) {
    return in;
}