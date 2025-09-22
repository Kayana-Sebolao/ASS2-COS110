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
    return this->columnSize;
}

Column::operator std::string() const {
    return this->columnName;
}

bool Column::operator==(const Column& other) const {
    int result = 0;
    if(this->columnName == other.columnName && this->columnSize == other.columnSize && this->){
        result = 2;
    }
    //the last comparison:
    for(int i =0;  < ths->columnSize; i++){
        this->c
    }
}

bool Column::operator!=(const Column& other) const {
    return false;
}

Column::~Column() {
}