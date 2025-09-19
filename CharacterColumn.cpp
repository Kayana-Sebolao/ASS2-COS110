#include "CharacterColumn.h"

CharacterColumn::CharacterColumn(std::string columnName, int columnSize) : Column(columnName, columnSize), array(NULL) {
}

CharacterColumn::~CharacterColumn() {
}

CharacterColumn* CharacterColumn::clone() const {
    return NULL;
}

CharacterColumn& CharacterColumn::operator+=(std::string data) {
    return *this;
}

CharacterColumn& CharacterColumn::operator-=(std::string data) {
    return *this;
}

CharacterColumn& CharacterColumn::operator-=(int index) {
    return *this;
}

int CharacterColumn::operator()(std::string data) const {
    return -1;
}

CharacterColumn& CharacterColumn::operator()(std::string value, std::string newValue) {
    return *this;
}

CharacterElement const* CharacterColumn::operator[](int pos) const {
    return NULL;
}

CharacterElement const* CharacterColumn::operator[](std::string value) const {
    return NULL;
}

bool CharacterColumn::operator!() const {
    return false;
}