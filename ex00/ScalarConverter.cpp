#include "ScalarConverter.hpp"

std::string trim(const std::string &str)
{
    size_t start = 0;
    size_t end = str.length();
    while (start < end && std::isspace(str[start])) start++;
    while (end > start && std::isspace(str[end - 1])) end--;
    return str.substr(start, end - start);
}
// ------------------- PRINT FUNCTIONS -------------------
void printChar(double nb)
{
    if (std::isnan(nb) || std::isinf(nb) || nb < 0 || nb > 127)
        std::cout << "char: impossible\n";
    else if (nb >= 32 && nb <= 126)
        std::cout << "char: '" << static_cast<char>(nb) << "'\n";
    else
        std::cout << "char: Non displayable\n";
}
void printInt(double nb)
{
    if (std::isnan(nb) || std::isinf(nb) || nb > std::numeric_limits<int>::max() || nb < std::numeric_limits<int>::min())
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
}
void printFloat(double nb)
{
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(nb) << "f\n";
}
void printDouble(double nb)
{
    std::cout << "double: " << std::fixed << std::setprecision(1) << nb << std::endl;
}
// ------------------- CONVERTER -------------------
void ScalarConverter::convert(const std::string &literal)
{
    std::string str = trim(literal);
    // Handle pseudo-literals
    if (str == "nan" || str == "nanf" || str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff")
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: " << (str.back() == 'f' ? str : str + "f") << "\n";
        std::cout << "double: " << (str.back() == 'f' ? str.substr(0, str.size() - 1) : str) << "\n";
        return;
    }
    // Single char input (not digit)
    if (str.length() == 1 && !std::isdigit(str[0]))
    {
        double nb = static_cast<double>(str[0]);
        printChar(nb);
        printInt(nb);
        printFloat(nb);
        printDouble(nb);
        return;
    }
    // Try to parse as double
    try
    {
        double nb = std::stod(str);
        printChar(nb);
        printInt(nb);
        printFloat(nb);
        printDouble(nb);
    }
    catch (const std::exception &)
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: impossible\n";
        std::cout << "double: impossible\n";
    }
}