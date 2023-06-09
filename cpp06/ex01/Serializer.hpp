#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdint.h>


struct Data{
    std::string s1;
};

class Serializer{

    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);
    
    public:
    
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};