#include "Column.h"
#include "BooleanColumn.h"
#include "CharacterColumn.h"
#include "IntegerColumn.h"
#include "RealValueColumn.h"
#include "TextColumn.h"

Column::Column(std::string columnName, int columnSize) : columnName(columnName), columnSize(columnSize) {
}

Column* Column::createColumnFromSchema(std::string schema) {
    return NULL;
}

Column::operator int() const {
    return 0;
}

Column::operator std::string() const {
    return "";
}

bool Column::operator==(const Column& other) const {
    return false;
}

bool Column::operator!=(const Column& other) const {
    return false;
}

Column::~Column() {
}