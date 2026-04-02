#include <iostream>
#include <cstdint>

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
uintptr_t Serializer::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}
Data *Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data opj;
    opj.id = 42;
    opj.name = "othmane";

    Data *ptr = &opj;
    uintptr_t raw = Serializer::serialize(ptr);
    Data *newPtr = Serializer::deserialize(raw);
    std::cout << "Original pointer: " << ptr << std::endl;
    std::cout << "Serialized (number): " << raw << std::endl;
    std::cout << "Deserialized pointer: " << newPtr << std::endl;

    // Serializer *op = &Serializer;
}