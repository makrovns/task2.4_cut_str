#include "substring_library.hpp"

namespace
{
    size_t one_substr(std::string& str)
    {
        auto index = str.find_last_of(str[0]);
    
        for (size_t i = 1; i < index; ++i)
        {
            auto temp_indx = str.find_last_of(str[i]);
        
            if (temp_indx > index)
                index = temp_indx;
        }

        return index + 1;
    }
}

std::vector<size_t> my_sub::substring(std::string& str)
{
    if(str.empty())
        throw std::invalid_argument("Empty entrance");

    std::vector<size_t> vec_sub;

    while(!str.empty())
    {
        size_t size_sub = one_substr(str);
        str.erase(0, size_sub);
        vec_sub.push_back(size_sub);
    }

    return vec_sub;
}
