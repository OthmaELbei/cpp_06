#include <iostream>
class ScalarConverter
{
public:
    static void convert(const std::string &leter);
};
std::string trim(std::string &fd)
{
    size_t start = 0;
    size_t end = fd.length();
    while (start < end && std::isspace(fd[start]))
    {
        start++;
    }
    while (start < end && std::isspace(fd[end]))
    {
        end--;
    }
    return fd.substr(start, end - start);
}
void ScalarConverter::convert(const std::string &leter)
{

    std::cout << "=====" <<trim(leter)  << std::endl;
}
int main(int ac, char **av)
{
    ScalarConverter Op;
    Op.convert(av[1]);
    // float x = std::stoi(av[1]);
    // std::cout << x << std::endl;
}