#include "TextElement.h"

std::ostream& TextElement::print(std::ostream& out) const {
    out<<data;
    return out;
}

TextElement::TextElement(std::string data) : data(data) {
}

bool TextElement::operator==(const std::string& data) const {
    if(data == this->data){
        return true;
    }
    return false;

}

void TextElement::operator()(const std::string& data) {
    this->data = data;
}

TextElement::operator std::string() const {
 return data;
}