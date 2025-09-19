#include "Element.h"

Element::~Element() {}

bool Element::operator!=(std::string& data) {
    return !(*this == data);
}

std::ostream& operator<<(std::ostream& out, const Element& el) {
    return el.print(out);
}