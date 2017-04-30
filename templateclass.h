#ifndef INCLUDED_TEMPLATECLASS_H
#define INCLUDED_TEMPLATECLASS_H

#include <map>
#include <vector>
#include <iostream>

namespace CJ {
namespace Project3 {

class TemplateClass
{
public:
    template <typename T>
    static std::map<T, int> getMap(const std::vector<T>& vec);
        // Return a map of elem -> index for each elem in 
        // vec, where index is its index in the vec.

    template <typename N, typename V>
    static void printMap(const std::map<N, V>& map);

};

// Template code

template <typename T>
std::map<T, int> TemplateClass::getMap(const std::vector<T>& vec)
{
    std::map<T, int> map;
    typedef typename std::vector<T>::const_iterator CIT;
    
    int i = 0;
    for (CIT cit = vec.begin(); cit != vec.end(); ++cit)
    {
        map[*cit] = i++;
    }
    
    return map;
}

template <typename N, typename V>
void TemplateClass::printMap(const std::map<N, V>& map)
{
    typedef typename std::map<N, V>::const_iterator IT;
    
    for (IT it = map.begin(); it != map.end(); ++it)
    {
        std::cout << "KEY " << it->first << " VALUE "
                << it->second << std::endl;
    }
}
    
} // end project namespace Project3
} // end corporate namespace CJ
#endif