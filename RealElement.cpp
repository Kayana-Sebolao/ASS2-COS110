#include "RealElement.h"
#include <sstream>

float RealElement::convert(std::string str) {
    std::istringstream iss(str);
    float value = 0.0f;
    iss>> value;
    return value;
}

std::ostream& RealElement::print(std::ostream& out) const {
    out<<data;
    return out;
}

RealElement::RealElement(std::string data) : data(0.0f) {
    this->data = convert(data);
}

bool RealElement::operator==(const std::string& data) const {
    float compare = convert(data);
    if(compare == this->data){
        return true;
    }
    return false;
}

void RealElement::operator()(const std::string& data) {
    this->data = convert(data);
}

RealElement::operator std::string() const {
  return std::string(1,data);
}