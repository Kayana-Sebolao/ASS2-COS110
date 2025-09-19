#include "BooleanElement.h"
#include <sstream>

bool BooleanElement::convert(std::string str) {
    return str == "T";
}

std::ostream& BooleanElement::print(std::ostream& out) const {
    return out;
}

BooleanElement::BooleanElement(std::string data) : data(false) {
}

bool BooleanElement::operator==(const std::string& data) const {
    return false;
}

void BooleanElement::operator()(const std::string& data) {
}

BooleanElement::operator std::string() const {
    return "";
}