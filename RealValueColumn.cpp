#include "RealValueColumn.h"

RealValueColumn::RealValueColumn(std::string columnName, int columnSize) : Column(columnName, columnSize), array(NULL) {
}

RealValueColumn::~RealValueColumn() {
}

RealValueColumn* RealValueColumn::clone() const {
    return NULL;
}

RealValueColumn& RealValueColumn::operator+=(std::string data) {
    return *this;
}

RealValueColumn& RealValueColumn::operator-=(std::string data) {
    return *this;
}

RealValueColumn& RealValueColumn::operator-=(int index) {
    return *this;
}

int RealValueColumn::operator()(std::string data) const {
    return -1;
}

RealValueColumn& RealValueColumn::operator()(std::string value, std::string newValue) {
    return *this;
}

RealElement const* RealValueColumn::operator[](int pos) const {
    return NULL;
}

RealElement const* RealValueColumn::operator[](std::string value) const {
    return NULL;
}

bool RealValueColumn::operator!() const {
    return false;
}