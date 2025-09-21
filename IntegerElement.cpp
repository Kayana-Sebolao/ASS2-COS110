#include "IntegerElement.h"
#include <sstream>

int IntegerElement::convert(std::string str) {
  std::istringstream s(str);
    int value = 0;
    s>> value;
    return value;
}

std::ostream& IntegerElement::print(std::ostream& out) const {
    out<< data;
    return out;
}

IntegerElement::IntegerElement(std::string data) : data(0) {
    this->data = convert(data);
}

bool IntegerElement::operator==(const std::string& data) const {
    int compare = convert(data);
    if(compare == this->data){
        return true;
    }
    return false;
}

void IntegerElement::operator()(const std::string& data) {
    this->data = convert(data);
}

IntegerElement::operator std::string() const {
     return std::string(1,data);
}