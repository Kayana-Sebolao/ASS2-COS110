#include "CharacterElement.h"
#include <sstream>

char CharacterElement::convert(std::string str) {
    return ' ';
}

std::ostream& CharacterElement::print(std::ostream& out) const {
    return out;
}

CharacterElement::CharacterElement(std::string data) : data(' ') {
}

bool CharacterElement::operator==(const std::string& data) const {
    return false;
}

void CharacterElement::operator()(const std::string& data) {
}

CharacterElement::operator std::string() const {
    return "";
}