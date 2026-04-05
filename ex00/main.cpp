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

// #include "ScalarConverter.hpp"

// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <cctype>
// #include <limits>
// #include <cmath>
// #include <cstdlib>
// #include <cmath>
// #include <climits> 
// #include <cfloat>

// struct data {
//     char c;
//     int  nb;
//     float f;
//     double d;
// };
// enum TYPE { CHAR, INT, FLOAT, DOUBLE, INVALID };


// static data g_data;

// static bool hasDot(const std::string& s) {
//     return s.find('.') != std::string::npos;
// }

// static bool isPseudoFloat(const std::string& s) {
//     return (s == "nanf" || s == "+inff" || s == "-inff");
// }

// static bool isPseudoDouble(const std::string& s) {
//     return (s == "nan" || s == "+inf" || s == "-inf");
// }

// // static bool isFloatLiteral(const std::string& s)
// // {
// //     if (isPseudoFloat(s))
// //         return true;

// //     if (s.size() < 2 || s[s.size() - 1] != 'f')
// //         return false;

// //     std::string core = s.substr(0, s.size() - 1); // نحيدو 'f'

// //     // باش ما نعتابروش "42f" (اختياري) => حسب subject غالباً خاص '.'
// //     if (!hasDot(core))
// //         return false;

// //     char* end = 0;
// //     std::strtod(core.c_str(), &end);
// //     return (end != core.c_str() && *end == '\0');
// // }

// // static bool isDoubleLiteral(const std::string& s)
// // {
// //     if (isPseudoDouble(s))
// //         return true;

// //     if (s.empty() || s[s.size() - 1] == 'f')
// //         return false;

// //     if (!hasDot(s))
// //         return false;

// //     char* end = 0;
// //     std::strtod(s.c_str(), &end);
// //     return (end != s.c_str() && *end == '\0');
// // }
// class ScalarConverter
// {
//     ScalarConverter();
//     ScalarConverter(const ScalarConverter &op);
//     ScalarConverter &operator=(const ScalarConverter &op);
//     ~ScalarConverter();

// public:
//     static void convert(const std::string &literal);
// };

// // ----------------- Helpers -----------------
// std::string trim(const std::string &str)
// {
//     size_t start = 0;
//     size_t end = str.length();

//     while (start < end && std::isspace(static_cast<unsigned char>(str[start])))
//         start++;

//     while (end > start && std::isspace(static_cast<unsigned char>(str[end - 1])))
//         end--;

//     return str.substr(start, end - start);
// }

// void getChar(char cd)
// {
//     g_data.c = cd;   
// }
// void getInt(int n)
// {
//     g_data.nb = n;   
// }
// void getFlot(float flt)
// {
//     g_data.f = flt;
// }
// void pranterCher()
// {
//     std::cout << "char: '" << static_cast<char>(g_data.c) << "'" << std::endl;
//     std::cout << "int: " << static_cast<int>(g_data.c) << std::endl;
//     std::cout << "float: " << std::fixed << std::setprecision(1)
//               << static_cast<float>(g_data.c) << 'f' << std::endl;
//     std::cout << "double: " << std::fixed << std::setprecision(1)
//               << static_cast<double>(g_data.c) << "\n";
// }
// void pranterInt()
// {
//         int n = g_data.nb;

//     if (n < 0 || n > 127)
//         std::cout << "char: impossible\n";
//     else if (!std::isprint(static_cast<unsigned char>(n)))
//         std::cout << "char: Non displayable\n";
//     else
//         std::cout << "char: '" << static_cast<char>(n) << "'\n";
//     std::cout << "int: " << g_data.nb << std::endl;
//     std::cout << "float: " << std::fixed << std::setprecision(1)
//               << static_cast<float>(g_data.nb) << 'f' << std::endl;
//     std::cout << "double: " << std::fixed << std::setprecision(1)
//               << static_cast<double>(g_data.nb) << "\n";
// }


// static bool isCharLiteral(const std::string& s)
// {
  
//     if (s.size() == 1 && !std::isdigit(static_cast<unsigned char>(s[0])))
//     {
//         getChar(s[0]);
//         return true;
//     }

//     if (s.size() == 3 && s[0] == '\'' && s[2] == '\'' &&
//         std::isprint(static_cast<unsigned char>(s[1])) &&
//         !std::isdigit(static_cast<unsigned char>(s[1])))
//     {
//         getChar(s[1]);
//         return true;
//     }

//     return false;
// }
// static bool isIntger(const std::string &str)
// {
//     if (str.empty())
//         return false;
//     char *end = 0;
//     long v = std::strtol(str.c_str(), &end, 10);

//     if (end == str.c_str())
//         return false;

//     if (*end != '\0')
//         return false;

//     if (v > INT_MAX || v < INT_MIN)
//         return false;

//     int nb = static_cast<int>(v);
//     getInt(nb);
//     return true;

// }
// static bool isFloatLiteral(const std::string& s)
// {
//     if (isPseudoFloat(s))
//         return true;

//     if (s.size() < 2 || s[s.size() - 1] != 'f')
//         return false;

//     std::string core = s.substr(0, s.size() - 1);
//     if (!hasDot(core))
//         return false;

//     char* end = 0;
//     double v = std::strtod(core.c_str(), &end);

//     if (end == core.c_str() || *end != '\0')
//         return false;

//     getFlot(static_cast<float>(v));
//     return true;
// }
// void pranterFloat()
// {
//     float x = g_data.f;

//     // char
//     if (x < 0.0f || x > 127.0f)
//         std::cout << "char: impossible\n";
//     else if (!std::isprint(static_cast<unsigned char>(static_cast<int>(x))))
//         std::cout << "char: Non displayable\n";
//     else
//         std::cout << "char: '" << static_cast<char>(x) << "'\n";

//     // int
//     if (x > static_cast<float>(INT_MAX) || x < static_cast<float>(INT_MIN))
//         std::cout << "int: impossible\n";
//     else
//         std::cout << "int: " << static_cast<int>(x) << "\n";

//     // float
//     std::cout << "float: " << std::fixed << std::setprecision(1)
//               << x << "f\n";

//     // double
//     std::cout << "double: " << std::fixed << std::setprecision(1)
//               << static_cast<double>(x) << "\n";
// }

// TYPE detectType(const std::string &str)
// {
//     if (isCharLiteral(str))
//         return CHAR;
//     else if(isIntger(str))
//     {
//         return INT;
//     }
//     else if(isFloatLiteral(str))
//     {
//         return FLOAT;
//     }
//     else 
//     return INVALID;
// }

// // ----------------- convert -----------------
// void ScalarConverter::convert(const std::string &literal)
// {
//     std::string str = trim(literal);
//     TYPE type = detectType(str);

//     if (type == CHAR)
//         pranterCher();
//     else if(type == INT)
//         pranterInt();
//     else if(type == FLOAT)
//         pranterFloat();
//         std::cout << "INVALID\n";
// }

// // ----------------- main -----------------
// int main(int argc, char **argv)
// {
//     if (argc != 2)
//     {
//         std::cerr << "Usage: ./convert <literal>\n";
//         return 1;
//     }
//     ScalarConverter::convert(argv[1]);
//     return 0;
// }



#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <cfloat>

struct data {
    char   c;
    int    nb;
    float  f;
    double d;
};

enum TYPE { CHAR, INT, FLOAT, DOUBLE, INVALID };

static data g_data;

static bool myIsNan(double x) { return x != x; }

static bool myIsInf(double x) {
    return !myIsNan(x) && (x > DBL_MAX || x < -DBL_MAX);
}

static std::string trim(const std::string &str)
{
    size_t start = 0;
    size_t end = str.length();

    while (start < end && std::isspace(static_cast<unsigned char>(str[start])))
        start++;
    while (end > start && std::isspace(static_cast<unsigned char>(str[end - 1])))
        end--;

    return str.substr(start, end - start);
}

static bool hasDot(const std::string& s) {
    return s.find('.') != std::string::npos;
}

static bool isPseudoFloat(const std::string& s) {
    return (s == "nanf" || s == "+inff" || s == "-inff");
}

static bool isPseudoDouble(const std::string& s) {
    return (s == "nan" || s == "+inf" || s == "-inf");
}


static void getChar(char cd)   { g_data.c = cd; }
static void getInt(int n)      { g_data.nb = n; }
static void getFlot(float flt) { g_data.f = flt; }
static void getDouble(double d){ g_data.d = d; }


static void pranterCher()
{
    unsigned char uc = static_cast<unsigned char>(g_data.c);

    std::cout << "char: '" << g_data.c << "'\n";
    std::cout << "int: " << static_cast<int>(uc) << "\n";
    std::cout << "float: " << std::fixed << std::setprecision(1)
              << static_cast<float>(uc) << "f\n";
    std::cout << "double: " << std::fixed << std::setprecision(1)
              << static_cast<double>(uc) << "\n";
}

static void pranterInt()
{
    int n = g_data.nb;

    if (n < 0 || n > 127)
        std::cout << "char: impossible\n";
    else if (!std::isprint(static_cast<unsigned char>(n)))
        std::cout << "char: Non displayable\n";
    else
        std::cout << "char: '" << static_cast<char>(n) << "'\n";

    std::cout << "int: " << n << "\n";
    std::cout << "float: " << std::fixed << std::setprecision(1)
              << static_cast<float>(n) << "f\n";
    std::cout << "double: " << std::fixed << std::setprecision(1)
              << static_cast<double>(n) << "\n";
}

static void pranterFloat()
{
    float  xf = g_data.f;
    double x  = static_cast<double>(xf);

    // char
    if (myIsNan(x) || myIsInf(x) || x < 0.0 || x > 127.0)
        std::cout << "char: impossible\n";
    else if (!std::isprint(static_cast<unsigned char>(static_cast<int>(x))))
        std::cout << "char: Non displayable\n";
    else
        std::cout << "char: '" << static_cast<char>(x) << "'\n";

    // int
    if (myIsNan(x) || myIsInf(x) || x > INT_MAX || x < INT_MIN)
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(x) << "\n";


    if (myIsNan(x))
        std::cout << "float: nanf\n";
    else if (myIsInf(x))
        std::cout << "float: " << (x < 0 ? "-inff" : "+inff") << "\n";
    else
        std::cout << "float: " << std::fixed << std::setprecision(1)
                  << xf << "f\n";


    if (myIsNan(x))
        std::cout << "double: nan\n";
    else if (myIsInf(x))
        std::cout << "double: " << (x < 0 ? "-inf" : "+inf") << "\n";
    else
        std::cout << "double: " << std::fixed << std::setprecision(1)
                  << x << "\n";
}

static void pranterDouble()
{
    double x = g_data.d;

    if (myIsNan(x) || myIsInf(x) || x < 0.0 || x > 127.0)
        std::cout << "char: impossible\n";
    else if (!std::isprint(static_cast<unsigned char>(static_cast<int>(x))))
        std::cout << "char: Non displayable\n";
    else
        std::cout << "char: '" << static_cast<char>(x) << "'\n";

    if (myIsNan(x) || myIsInf(x) || x > INT_MAX || x < INT_MIN)
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(x) << "\n";

    if (myIsNan(x))
        std::cout << "float: nanf\n";
    else if (myIsInf(x))
        std::cout << "float: " << (x < 0 ? "-inff" : "+inff") << "\n";
    else if (x > FLT_MAX || x < -FLT_MAX)
        std::cout << "float: impossible\n";
    else
        std::cout << "float: " << std::fixed << std::setprecision(1)
                  << static_cast<float>(x) << "f\n";

    if (myIsNan(x))
        std::cout << "double: nan\n";
    else if (myIsInf(x))
        std::cout << "double: " << (x < 0 ? "-inf" : "+inf") << "\n";
    else
        std::cout << "double: " << std::fixed << std::setprecision(1)
                  << x << "\n";
}


static bool isCharLiteral(const std::string& s)
{
   
    if (s.size() == 1 && !std::isdigit(static_cast<unsigned char>(s[0])))
    {
        getChar(s[0]);
        return true;
    }

    if (s.size() == 3 && s[0] == '\'' && s[2] == '\'' &&
        std::isprint(static_cast<unsigned char>(s[1])))
    {
        getChar(s[1]);
        return true;
    }

    return false;
}

static bool isIntger(const std::string &str)
{
    if (str.empty())
        return false;

    char *end = 0;
    long v = std::strtol(str.c_str(), &end, 10);

    if (end == str.c_str()) 
        return false;
    if (*end != '\0')      
        return false;
    if (v > INT_MAX || v < INT_MIN)
        return false;

    getInt(static_cast<int>(v));
    return true;
}

static bool isFloatLiteral(const std::string& s)
{
    if (isPseudoFloat(s))
        return true;

    if (s.size() < 2 || s[s.size() - 1] != 'f')
        return false;

    std::string core = s.substr(0, s.size() - 1);
    if (!hasDot(core))
        return false;

    char* end = 0;
    double v = std::strtod(core.c_str(), &end);
    if (end == core.c_str() || *end != '\0')
        return false;

    getFlot(static_cast<float>(v));
    return true;
}

static bool isDoubleLiteral(const std::string& s)
{
    if (isPseudoDouble(s))
        return true;

    if (s.empty() || s[s.size() - 1] == 'f')
        return false;
    
    char* end = 0;
    double v = std::strtod(s.c_str(), &end);
    if (end == s.c_str() || *end != '\0')
        return false;

    getDouble(v);
    return true;
}

static TYPE detectType(const std::string &str)
{
    if (isCharLiteral(str))     return CHAR;
    if (isIntger(str))          return INT;
    if (isFloatLiteral(str))    return FLOAT;
    if (isDoubleLiteral(str))   return DOUBLE;
    return INVALID;
}


static void printPseudo(const std::string& s)
{
    std::cout << "char: impossible\n";
    std::cout << "int: impossible\n";

    // float
    if (s == "nan" || s == "+inf" || s == "-inf")
        std::cout << "float: " << s << "f\n";
    else
        std::cout << "float: " << s << "\n";

    // double
    if (s == "nanf" || s == "+inff" || s == "-inff")
        std::cout << "double: " << s.substr(0, s.size() - 1) << "\n";
    else
        std::cout << "double: " << s << "\n";
}

class ScalarConverter
{
    ScalarConverter();
    ScalarConverter(const ScalarConverter &op);
    ScalarConverter &operator=(const ScalarConverter &op);
    ~ScalarConverter();

public:
    static void convert(const std::string &literal);
};

void ScalarConverter::convert(const std::string &literal)
{
    std::string str = trim(literal);

    if (isPseudoFloat(str) || isPseudoDouble(str))
    {
        printPseudo(str);
        return;
    }

    TYPE type = detectType(str);

    if (type == CHAR)        pranterCher();
    else if (type == INT)    pranterInt();
    else if (type == FLOAT)  pranterFloat();
    else if (type == DOUBLE) pranterDouble();
   else if(type == INVALID)
   {
    std::cout << "Char : "<< "impossible" << std::endl;
    std::cout << "Int : " << "impossible" << std::endl;
    std::cout << "Float : " << "impossible" << std::endl;
    std::cout << "Double : "<< "impossible" << std::endl;
   }
}


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./convert <literal>\n";
        return 1;
    }
    ScalarConverter::convert(argv[1]);
    return 0;
}


// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <cctype>
// #include <cstdlib>
// #include <climits>
// #include <cfloat>

// struct data {
//     char   c;
//     int    nb;
//     float  f;
//     double d;
// };

// enum TYPE { CHAR, INT, FLOAT, DOUBLE, INVALID };

// static data g_data;

// static bool myIsNan(double x) { return x != x; }
// static bool myIsInf(double x) {
//     return !myIsNan(x) && (x > DBL_MAX || x < -DBL_MAX);
// }

// static std::string trim(const std::string &str)
// {
//     size_t start = 0;
//     size_t end = str.length();
//     while (start < end && std::isspace(static_cast<unsigned char>(str[start])))
//         start++;
//     while (end > start && std::isspace(static_cast<unsigned char>(str[end - 1])))
//         end--;
//     return str.substr(start, end - start);
// }

// static bool hasDot(const std::string& s) {
//     return s.find('.') != std::string::npos;
// }

// static bool isPseudoFloat(const std::string& s) {
//     return (s == "nanf" || s == "+inff" || s == "-inff");
// }

// static bool isPseudoDouble(const std::string& s) {
//     return (s == "nan" || s == "+inf" || s == "-inf");
// }

// static void getChar(char cd)    { g_data.c  = cd; }
// static void getInt(int n)       { g_data.nb = n;  }
// static void getFlot(float flt)  { g_data.f  = flt; }
// static void getDouble(double d) { g_data.d  = d;  }

// // ✅ إصلاح 3: فحص displayable في pranterCher
// static void pranterCher()
// {
//     unsigned char uc = static_cast<unsigned char>(g_data.c);

//     if (!std::isprint(uc))
//         std::cout << "char: Non displayable\n";
//     else
//         std::cout << "char: '" << g_data.c << "'\n";

//     std::cout << "int: "    << static_cast<int>(uc) << "\n";
//     std::cout << "float: "  << std::fixed << std::setprecision(1)
//               << static_cast<float>(uc)  << "f\n";
//     std::cout << "double: " << std::fixed << std::setprecision(1)
//               << static_cast<double>(uc) << "\n";
// }

// static void pranterInt()
// {
//     int n = g_data.nb;

//     if (n < 0 || n > 127)
//         std::cout << "char: impossible\n";
//     else if (!std::isprint(static_cast<unsigned char>(n)))
//         std::cout << "char: Non displayable\n";
//     else
//         std::cout << "char: '" << static_cast<char>(n) << "'\n";

//     std::cout << "int: "    << n << "\n";
//     std::cout << "float: "  << std::fixed << std::setprecision(1)
//               << static_cast<float>(n)  << "f\n";
//     std::cout << "double: " << std::fixed << std::setprecision(1)
//               << static_cast<double>(n) << "\n";
// }

// static void pranterFloat()
// {
//     float  xf = g_data.f;
//     double x  = static_cast<double>(xf);

//     if (myIsNan(x) || myIsInf(x) || x < 0.0 || x > 127.0)
//         std::cout << "char: impossible\n";
//     else if (!std::isprint(static_cast<unsigned char>(static_cast<int>(x))))
//         std::cout << "char: Non displayable\n";
//     else
//         std::cout << "char: '" << static_cast<char>(x) << "'\n";

//     if (myIsNan(x) || myIsInf(x) || x > INT_MAX || x < INT_MIN)
//         std::cout << "int: impossible\n";
//     else
//         std::cout << "int: " << static_cast<int>(x) << "\n";

//     if (myIsNan(x))
//         std::cout << "float: nanf\n";
//     else if (myIsInf(x))
//         std::cout << "float: " << (x < 0 ? "-inff" : "+inff") << "\n";
//     else
//         std::cout << "float: " << std::fixed << std::setprecision(1)
//                   << xf << "f\n";

//     if (myIsNan(x))
//         std::cout << "double: nan\n";
//     else if (myIsInf(x))
//         std::cout << "double: " << (x < 0 ? "-inf" : "+inf") << "\n";
//     else
//         std::cout << "double: " << std::fixed << std::setprecision(1)
//                   << x << "\n";
// }

// static void pranterDouble()
// {
//     double x = g_data.d;

//     if (myIsNan(x) || myIsInf(x) || x < 0.0 || x > 127.0)
//         std::cout << "char: impossible\n";
//     else if (!std::isprint(static_cast<unsigned char>(static_cast<int>(x))))
//         std::cout << "char: Non displayable\n";
//     else
//         std::cout << "char: '" << static_cast<char>(x) << "'\n";

//     if (myIsNan(x) || myIsInf(x) || x > INT_MAX || x < INT_MIN)
//         std::cout << "int: impossible\n";
//     else
//         std::cout << "int: " << static_cast<int>(x) << "\n";

//     if (myIsNan(x))
//         std::cout << "float: nanf\n";
//     else if (myIsInf(x))
//         std::cout << "float: " << (x < 0 ? "-inff" : "+inff") << "\n";
//     else if (x > FLT_MAX || x < -FLT_MAX)
//         std::cout << "float: impossible\n";
//     else
//         std::cout << "float: " << std::fixed << std::setprecision(1)
//                   << static_cast<float>(x) << "f\n";

//     if (myIsNan(x))
//         std::cout << "double: nan\n";
//     else if (myIsInf(x))
//         std::cout << "double: " << (x < 0 ? "-inf" : "+inf") << "\n";
//     else
//         std::cout << "double: " << std::fixed << std::setprecision(1)
//                   << x << "\n";
// }

// static bool isCharLiteral(const std::string& s)
// {
//     if (s.size() == 1 && !std::isdigit(static_cast<unsigned char>(s[0])))
//     {
//         getChar(s[0]);
//         return true;
//     }
//     if (s.size() == 3 && s[0] == '\'' && s[2] == '\'' &&
//         std::isprint(static_cast<unsigned char>(s[1])))
//     {
//         getChar(s[1]);
//         return true;
//     }
//     return false;
// }

// // ✅ إصلاح 1: overflow → INVALID بدل رفض silent
// static bool isIntger(const std::string &str)
// {
//     if (str.empty()) return false;

//     // ✅ تحقق من الصيغة يدوياً أولاً
//     size_t i = 0;
//     if (str[i] == '-' || str[i] == '+') i++;
//     if (i == str.size()) return false;
//     while (i < str.size()) {
//         if (!std::isdigit(static_cast<unsigned char>(str[i])))
//             return false;
//         i++;
//     }

//     // ✅ الصيغة صحيحة، الآن نتحقق من النطاق
//     char *end = 0;
//     long v = std::strtol(str.c_str(), &end, 10);
//     if (v > INT_MAX || v < INT_MIN) {
//         // ✅ overflow → نخزن كـ double ونطبع impossible للـ int
//         getDouble(static_cast<double>(v));
//         return false;
//     }

//     getInt(static_cast<int>(v));
//     return true;
// }

// static bool isFloatLiteral(const std::string& s)
// {
//     if (isPseudoFloat(s))
//         return true;
//     if (s.size() < 2 || s[s.size() - 1] != 'f')
//         return false;
//     std::string core = s.substr(0, s.size() - 1);
//     if (!hasDot(core))
//         return false;
//     char* end = 0;
//     double v = std::strtod(core.c_str(), &end);
//     if (end == core.c_str() || *end != '\0')
//         return false;
//     getFlot(static_cast<float>(v));
//     return true;
// }

// // ✅ إصلاح 2: إضافة شرط hasDot لرفض integers
// static bool isDoubleLiteral(const std::string& s)
// {
//     if (isPseudoDouble(s))
//         return true;
//     if (s.empty() || s[s.size() - 1] == 'f')
//         return false;
//     if (!hasDot(s))   // ✅ يرفض "42" و "9999999999"
//         return false;
//     char* end = 0;
//     double v = std::strtod(s.c_str(), &end);
//     if (end == s.c_str() || *end != '\0')
//         return false;
//     getDouble(v);
//     return true;
// }

// static TYPE detectType(const std::string &str)
// {
//     if (isCharLiteral(str))  return CHAR;
//     if (isIntger(str))       return INT;
//     if (isFloatLiteral(str)) return FLOAT;
//     if (isDoubleLiteral(str))return DOUBLE;
//     return INVALID;
// }

// static void printPseudo(const std::string& s)
// {
//     std::cout << "char: impossible\n";
//     std::cout << "int: impossible\n";
//     if (s == "nan" || s == "+inf" || s == "-inf")
//         std::cout << "float: " << s << "f\n";
//     else
//         std::cout << "float: " << s << "\n";
//     if (s == "nanf" || s == "+inff" || s == "-inff")
//         std::cout << "double: " << s.substr(0, s.size() - 1) << "\n";
//     else
//         std::cout << "double: " << s << "\n";
// }

// // ✅ إصلاح 4: INVALID بصيغة صحيحة
// static void printImpossible()
// {
//     std::cout << "char: impossible\n";
//     std::cout << "int: impossible\n";
//     std::cout << "float: impossible\n";
//     std::cout << "double: impossible\n";
// }

// class ScalarConverter
// {
//     ScalarConverter();
//     ScalarConverter(const ScalarConverter &op);
//     ScalarConverter &operator=(const ScalarConverter &op);
//     ~ScalarConverter();
// public:
//     static void convert(const std::string &literal);
// };

// void ScalarConverter::convert(const std::string &literal)
// {
//     std::string str = trim(literal);

//     if (isPseudoFloat(str) || isPseudoDouble(str))
//     {
//         printPseudo(str);
//         return;
//     }

//     TYPE type = detectType(str);

//     if      (type == CHAR)    pranterCher();
//     else if (type == INT)     pranterInt();
//     else if (type == FLOAT)   pranterFloat();
//     else if (type == DOUBLE)  pranterDouble();
//     else                      printImpossible(); // ✅
// }

// int main(int argc, char **argv)
// {
//     if (argc != 2)
//     {
//         std::cerr << "Usage: ./convert <literal>\n";
//         return 1;
//     }
//     ScalarConverter::convert(argv[1]);
//     return 0;
// }