#include "CharacterElement.h"
#include <sstream>

char CharacterElement::convert(std::string str) {
      if(str.empty()){
    return ' ';
   }
   return str[0];
}

std::ostream& CharacterElement::print(std::ostream& out) const {
    out<< data;
    return out;
}

CharacterElement::CharacterElement(std::string data) : data(' ') {
    this->data = convert(data);
}



bool CharacterElement::operator==(const std::string& data) const {
      char compare = convert(data);
   if(compare == this->data){
      return true;
   }
   return false;
}

void CharacterElement::operator()(const std::string& data) {
    this->data = convert(data);
}

CharacterElement::operator std::string() const {
    return std::string(1,data);
}