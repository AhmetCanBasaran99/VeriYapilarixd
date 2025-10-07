#include <iostream>
using namespace std;

int iterativeFactorial(int n)
{
    int result = 1;
    
    for (int i=2; i<=n; i++)
    {
        result *= i;
    }

    return result;
}

int recursiveFactorial(int n)
{
    if (n == 0 || n == 1)
     return 1;
    
    return n * recursiveFactorial(n-1);
    
}


int main()
{
    int n;
    cout << "Bir sayi girin: \n";
    cin >> n;
    
    cout << "\n";
    cout << n << "!= " << iterativeFactorial(n) << "\n";
    cout << "\n";
    cout << n << "!= " << recursiveFactorial(n) << "\n";

    return 0;
}