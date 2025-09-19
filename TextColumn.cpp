#include "TextColumn.h"

TextColumn::TextColumn(std::string columnName, int columnSize) : Column(columnName, columnSize), array(NULL) {
}

TextColumn::~TextColumn() {
}

TextColumn* TextColumn::clone() const {
    return NULL;
}

TextColumn& TextColumn::operator+=(std::string data) {
    return *this;
}

TextColumn& TextColumn::operator-=(std::string data) {
    return *this;
}

TextColumn& TextColumn::operator-=(int index) {
    return *this;
}

int TextColumn::operator()(std::string data) const {
    return -1;
}

TextColumn& TextColumn::operator()(std::string value, std::string newValue) {
    return *this;
}

TextElement const* TextColumn::operator[](int pos) const {
    return NULL;
}

TextElement const* TextColumn::operator[](std::string value) const {
    return NULL;
}

bool TextColumn::operator!() const {
    return false;
}