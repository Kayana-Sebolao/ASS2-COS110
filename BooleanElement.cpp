#include "BooleanElement.h"
#include <sstream>

bool BooleanElement::convert(std::string str) {
 if(str == "T"){
        return true;        
    }
    return false;
}

std::ostream& BooleanElement::print(std::ostream& out) const {
    out<<data;
    return out;
}

BooleanElement::BooleanElement(std::string data) : data(false) {
    this->data = convert(data);
}

bool BooleanElement::operator==(const std::string& data) const {
       bool compare = convert(data);
   if(compare == this->data){
      return true;
   }
   return false;
}

void BooleanElement::operator()(const std::string& data) {
    this->data = convert(data);
}

BooleanElement::operator std::string() const {
    return data ? "T" : "F";
}