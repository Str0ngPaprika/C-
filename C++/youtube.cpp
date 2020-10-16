// https://youtu.be/_bYFu9mBnr4?t=8918
#include <iostream>
#include <climits>
#include <float.h>

double power(double, int);


int main()
{
    short shtX;
    int intX;
    long lngX;
    long long llgX;
    
    unsigned short ustX;
    unsigned int uitX;
    unsigned long ulgX;
    unsigned long long ullX;

    std::cout << "Character\t\t:" << CHAR_MIN << " to " << CHAR_MAX << std::endl;
    std::cout << "Unsigned Character\t\t:0 to " << UCHAR_MAX << std::endl;
    
    std::cout << "Short             :" << SHRT_MIN << " to " << SHRT_MAX << std::endl;
    std::cout << "Unsigned Short    :0 to " << USHRT_MAX << std::endl;

    std::cout << "Integer           :" << INT_MIN << " to " << INT_MAX << std::endl;
    std::cout << "Unsigned Integer  :0 to " << UINT_MAX << std::endl;

    std::cout << "Long              :" << LONG_MIN << " to " << LONG_MAX << std::endl;
    std::cout << "Unsigned Long     :0 to " << ULONG_MAX << std::endl;
    
    std::cout << "Long Long         :" << LLONG_MIN << " to " << LLONG_MAX << std::endl;
    std::cout << "Unsigned Long Long:0 to " << ULLONG_MAX << std::endl;

    return 0;
}

double power(double dblBase, int intExponent)
{
    int intCount;
    double dblCalc;

    intCount = 0;
    dblCalc = 0;

    dblCalc = dblBase;

    for (intCount = 1; intCount < intExponent; intCount++)
    {
        dblCalc = dblCalc * dblBase;
    }

    return dblCalc;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
