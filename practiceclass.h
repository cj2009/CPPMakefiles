#ifndef INCLUDED_PRACTICECLASS_H
#define INCLUDED_PRACTICECLASS_H

#include <iostream>
#include <string>
#include <map>

namespace CJ {
namespace Project3 {

class PracticeClass
{
public:
    typedef std::map<std::string, std::string> StringMap;
    static StringMap getMap();
};
    
} // end project namespace Project3
} // end corporate namespace CJ
#endif