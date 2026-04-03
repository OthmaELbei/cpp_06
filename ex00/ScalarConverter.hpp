#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <cmath>
#include <climits> 
#include <cfloat>
class ScalarConverter
{
    ScalarConverter();
    ScalarConverter(const ScalarConverter &op);
    ScalarConverter &operator=(const ScalarConverter &op);
    ~ScalarConverter();

public:
    static void convert(const std::string &literal);
};
#endif