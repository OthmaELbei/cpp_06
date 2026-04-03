
#include "Serializer.hpp"
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