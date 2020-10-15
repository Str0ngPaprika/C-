// https://youtu.be/_bYFu9mBnr4?t=5353
#include <iostream>

double power(double, int);


int main()
{
    int intBase, intExponent;
    double dblPower;

    std::cout << "Enter base: ";
    std::cin >> intBase;
    std::cout << "Enter Exponent: ";
    std::cin >> intExponent;

    dblPower = power(intBase, intExponent);

    std::cout << "The Power is: " << dblPower << "\n";

    return 0;
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
