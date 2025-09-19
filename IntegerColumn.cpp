#include "IntegerColumn.h"

IntegerColumn::IntegerColumn(std::string columnName, int columnSize) : Column(columnName, columnSize), array(NULL) {
}

IntegerColumn::~IntegerColumn() {
}

IntegerColumn* IntegerColumn::clone() const {
    return NULL;
}

IntegerColumn& IntegerColumn::operator+=(std::string data) {
    return *this;
}

IntegerColumn& IntegerColumn::operator-=(std::string data) {
    return *this;
}

IntegerColumn& IntegerColumn::operator-=(int index) {
    return *this;
}

int IntegerColumn::operator()(std::string data) const {
    return -1;
}

IntegerColumn& IntegerColumn::operator()(std::string value, std::string newValue) {
    return *this;
}

IntegerElement const* IntegerColumn::operator[](int pos) const {
    return NULL;
}

IntegerElement const* IntegerColumn::operator[](std::string value) const {
    return NULL;
}

bool IntegerColumn::operator!() const {
    return false;
}