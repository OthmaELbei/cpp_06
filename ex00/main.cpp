// #include <iostream>
// #include <cctype>
// #include <iomanip>
// #include <stdexcept> 
// #include <cmath>
// class ScalarConverter
// {
//     ScalarConverter();
//     ScalarConverter(const ScalarConverter &op);
//     ScalarConverter &operator =(const ScalarConverter &op);
//     ~ScalarConverter();

// public:
//     static void convert(const std::string &leter);
// };
// std::string trim(const std::string &fd)
// {
//     size_t start = 0;
//     size_t end = fd.length();
//     while (start < end && std::isspace(fd[start]))
//     {
//         start++;
//     }
//     while (start < end && std::isspace(fd[end]))
//     {
//         end--;
//     }
//     return fd.substr(start, end - start);
// }
//  void isTheChar(char c)
//  {
//     std::cout << "char: '" << c << "'" << std::endl;
//     std::cout << "int: "  << static_cast<int>(c) << std::endl;
//     std::cout << "float: " << std::fixed << std::setprecision(1)  << static_cast<float>(c) << "f" << std::endl;
//     std::cout << "double: " << std::fixed << std::setprecision(1)  << static_cast<double>(c) << std::endl;
//  }
//  bool isInt(const std::string &str)
//  {
//     size_t pos;
//     try
//     {
//         double nb = std::stod(str);
//         if(nb > INT32_MAX || nb < INT32_MIN )
//         {
//             return false;
//         }
//         std::stoi(str,&pos);
//         return pos == str.length();
//     }
//     catch(...)
//     {
//        return false;
//     }
    
//  }
//  bool isFluot(const std::string &str)
//  {
//     size_t pos;
//     try
//     {
//         std::stof(str,&pos);
//         return pos == str.length();
//     }
//     catch(...)
//     {
//        return false;
//     }
    
//  }
//  bool isduble(const std::string &str)
//  {
//     size_t pos;
//     try
//     {
//         std::stod(str,&pos);
//         return pos == str.length();
//     }
//     catch(...)
//     {
//        return false;
//     }
    
//  }
//  void isTheInt(const std::string &str)
//  {
//     int nb = std::stoi(str);
//     if(nb >= 32 && nb <= 126)
//     {
//         std::cout <<" char: '" << static_cast<char>(nb) << "'" << std::endl;
//     }else if (std::isnan(nb) || std::isinf(nb) || nb >= 0 && nb <= 127) {
//         std::cout <<" char: " << "Non displayable" << std::endl;
//     }else 
//     {
//         std::cout <<" char: " << "impossible" << std::endl;
//     }
//     std::cout << "int: "  << nb << std::endl;
//     std::cout << "float: " << std::fixed << std::setprecision(1)  << static_cast<float>(nb) << "f" << std::endl;
//     std::cout << "double: " << std::fixed << std::setprecision(1)  << static_cast<double>(nb) << std::endl;
//  }
//  void istheFluot(const std::string &str)
//  {
//     float nb = std::stof(str);
//     if(nb >= 32 && nb <= 126)
//     {
//         std::cout <<" char: '" << static_cast<char>(nb) << "'" << std::endl;
//     }else if (std::isnan(nb) || std::isinf(nb) || nb >= 0 && nb <= 127) {
//         std::cout <<" char: " << "Non displayable" << std::endl;
//     }else 
//     {
//         std::cout <<" char: " << "impossible" << std::endl;
//     }
//     std::cout << "int: "  << static_cast<int>(nb) << std::endl;
//     std::cout << "float: "   << nb << "f" << std::endl;
//     std::cout << "double: " << std::fixed << std::setprecision(1)  << static_cast<double>(nb) << std::endl;
//  }
//  void isthedouble(const std::string &str)
//  {
//     double nb = std::stod(str);
//     if(nb >= 32 && nb <= 126)
//     {
//         std::cout <<" char: '" << static_cast<char>(nb) << "'" << std::endl;
//     }else if (std::isnan(nb) || std::isinf(nb) || nb >= 0 && nb <= 127) {
//         std::cout <<" char: " << "Non displayable" << std::endl;
//     }else 
//     {
//         std::cout <<" char: " << "impossible" << std::endl;
//     }
//     std::cout << "int: "  << static_cast<int>(nb) << std::endl;
//      std::cout << "float: " << std::fixed << std::setprecision(1)  << static_cast<float>(nb) << "f" << std::endl;
//     std::cout << "double: " << nb << std::endl;
//  }
// void ScalarConverter::convert(const std::string &leter)
// {
//     std::string str =trim(leter);
//     if (str == "nan" || str == "nanf" || str == "+inf" || 
//         str == "-inf" || str == "+inff" || str == "-inff") 
//     { 
//                 // pseudo type 
//             std::cout << "char: impossible\n";
//             std::cout << "int: impossible\n";
//             std::cout << "float: " << str << "\n";
//             std::cout << "double: "<<str << "\n";
//             return;
//     }

//     if(trim(leter).length() == 1 && !(std::isdigit(str[0])))
//     {
//         char c = str[0];
//         isTheChar(c);
//     }
//     else if (isInt(trim(leter)))
//     {
//         isTheInt(trim(leter));
//     }
//     else if (isFluot(trim(leter)))
//     {
//         istheFluot(trim(leter));
//     }
//     else if (isduble(trim(leter)))
//     {
//         isthedouble(trim(leter));
//     }
//     // std::cout << "=====" <<trim(leter)  << std::endl;
// }
// int main(int ac, char **av)
// {
    
//     ScalarConverter::convert(av[1]);
//     // float x = std::stoi(av[1]);
//     // std::cout << x << std::endl;
// }
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>
#include <cmath>
class ScalarConverter
{
    ScalarConverter();
    ScalarConverter(const ScalarConverter &op);
    ScalarConverter &operator=(const ScalarConverter &op);
    ~ScalarConverter();
public:
    static void convert(const std::string &literal);
};
// Trim whitespaces
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
// ------------------- MAIN -------------------
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./convert <literal>\n";
        return 1;
    }
    ScalarConverter::convert(argv[1]);
}
