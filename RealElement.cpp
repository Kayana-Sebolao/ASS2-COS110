#include "RealElement.h"
#include <sstream>

float RealElement::convert(std::string str) {
    return 0.0f;
}

std::ostream& RealElement::print(std::ostream& out) const {
    return out;
}

RealElement::RealElement(std::string data) : data(0.0f) {
}

bool RealElement::operator==(const std::string& data) const {
    return false;
}

void RealElement::operator()(const std::string& data) {
}

RealElement::operator std::string() const {
    return "";
}