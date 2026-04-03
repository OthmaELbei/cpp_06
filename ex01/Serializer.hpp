#ifndef SERIALIZER_HPP
#define SERIALIZER_HP
#include <iostream>
// #include <cstdint>
#include <stdint.h>  

struct Data
{
    int id;
    std::string name;
};

class Serializer
{
private:
    Serializer();
    Serializer(const Serializer &op);
    Serializer &operator=(const Serializer &op);
    ~Serializer();

public:
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};
#endif