#include "BooleanColumn.h"

BooleanColumn::BooleanColumn(std::string columnName, int columnSize) : Column(columnName, columnSize), array(NULL) {
}

BooleanColumn::~BooleanColumn() {
}

BooleanColumn* BooleanColumn::clone() const {
    return NULL;
}

BooleanColumn& BooleanColumn::operator+=(std::string data) {
    return *this;
}

BooleanColumn& BooleanColumn::operator-=(std::string data) {
    return *this;
}

BooleanColumn& BooleanColumn::operator-=(int index) {
    return *this;
}

int BooleanColumn::operator()(std::string data) const {
    return -1;
}

BooleanColumn& BooleanColumn::operator()(std::string value, std::string newValue) {
    return *this;
}

BooleanElement const* BooleanColumn::operator[](int pos) const {
    return NULL;
}

BooleanElement const* BooleanColumn::operator[](std::string value) const {
    return NULL;
}

bool BooleanColumn::operator!() const {
    return false;
}