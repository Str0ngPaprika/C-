// https://youtu.be/_bYFu9mBnr4?t=6578
#include <iostream>
#include <climits>

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

    std::cout << "Short:" <<SHRT_MIN<<" to "<<SHRT_MAX << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(long) << std::endl;
    std::cout << sizeof(long long) << std::endl;
    std::cout << sizeof(unsigned short) << std::endl;
    std::cout << sizeof(unsigned int) << std::endl;
    std::cout << sizeof(unsigned long) << std::endl;
    std::cout << sizeof(unsigned long long) << std::endl;    

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
