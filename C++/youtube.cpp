// https://youtu.be/_bYFu9mBnr4?t=9424 
#include <iostream>
#include <cmath>
#include <string>

int PrimeFactors(long long);
int NextPrime(int);
bool isPrime(int);

int main()
{
      
    
    //std::cout << "Next Prime: " << NextPrime(10) << std::endl;
   std::cout << std::endl << "Largest Prime Factor: " << PrimeFactors(600851475143) << std::endl;

    return 0;
}

bool isPrime(int n)
{
    // Corner cases  
    if (n <= 1)  return false;
    if (n <= 3)  return true;
 
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int NextPrime(int N)
{
    if (N <= 1)
        return 2;

    int prime = N;
    bool found = false;

    
    while (!found) {
        prime++;

        if (isPrime(prime))
            found = true;
    }

    return prime;
}

int PrimeFactors(long long intLimit)
{
    int intPrimeFactor=0;

    while (intPrimeFactor < intLimit)
    {
        intPrimeFactor = NextPrime(intPrimeFactor);
        while (intLimit % intPrimeFactor == 0)
        {
            intLimit = intLimit / intPrimeFactor;
            std::cout << intPrimeFactor << " ";
        }
 
    }

    return intPrimeFactor;
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
