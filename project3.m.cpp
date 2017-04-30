#include <iostream>
#include <map>

// Include local project headers
#include "practiceclass.h"
#include "templateclass.h"

int main()
{
    using namespace CJ;
    using namespace Project3;
    
    PracticeClass::StringMap map = PracticeClass::getMap();
    TemplateClass::printMap<std::string, std::string>(map);

    return 0;

}
