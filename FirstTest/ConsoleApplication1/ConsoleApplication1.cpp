#include "MathUtils.h"
#include "IOUtils.h"

int main()
{
    double value{ 10 };
    std::cout << "Twice the value of " << value << " is " << returnTwiceTheValue(value) << std::endl;
    double value{ 1234567890987654321 };
    std::cout << "Twice the value of " << value << " is " << returnTwiceTheValue(value) << std::endl;
    double value{ 99999999999999999999999999999999999 };
    std::cout << "Twice the value of " << value << " is " << returnTwiceTheValue(value) << std::endl;
}