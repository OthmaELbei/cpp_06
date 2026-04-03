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

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./convert <literal>\n";
        return 1;
    }
    ScalarConverter::convert(argv[1]);
}
