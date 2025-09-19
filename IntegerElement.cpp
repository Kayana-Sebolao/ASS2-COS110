#include "IntegerElement.h"
#include <sstream>

int IntegerElement::convert(std::string str) {
    return 0;
}

std::ostream& IntegerElement::print(std::ostream& out) const {
    return out;
}

IntegerElement::IntegerElement(std::string data) : data(0) {
}

bool IntegerElement::operator==(const std::string& data) const {
    return false;
}

void IntegerElement::operator()(const std::string& data) {
}

IntegerElement::operator std::string() const {
    return "";
}