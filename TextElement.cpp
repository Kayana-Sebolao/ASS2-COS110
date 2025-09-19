#include "TextElement.h"

std::ostream& TextElement::print(std::ostream& out) const {
    return out;
}

TextElement::TextElement(std::string data) : data(data) {
}

bool TextElement::operator==(const std::string& data) const {
    return false;
}

void TextElement::operator()(const std::string& data) {
}

TextElement::operator std::string() const {
    return "";
}