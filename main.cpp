#include "Database.h"
#include "BooleanColumn.h"
#include "CharacterColumn.h"
#include "IntegerColumn.h"
#include "RealValueColumn.h"
#include "TextColumn.h"
#include "InsertQuery.h"
#include "RemoveQuery.h"
#include "SearchQuery.h"
#include "UpdateQuery.h"
#include <iostream>

int main() {
    //testing element hireachy
    CharacterElement cElement("kayana");
    std::cout<<(cElement == "k" ? "true" : "false")<<std::endl;
    cElement("H");
    std::cout<<cElement<<std::endl;
    std::string s = cElement;
    std::cout<<cElement<<std::endl;

    IntegerElement iElement("kayana");
    IntegerElement iElement2("50");
    std::cout<<iElement<<" "<<iElement2<<std::endl;
    std::cout<<(iElement2 == "51" ? "true" : "false" )<<std::endl;
    iElement("50"); std::cout<<iElement<<std::endl;





    std::cout << "Basic compilation test successful!" << std::endl;
    return 0;
}