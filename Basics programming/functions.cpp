#include <iostream>
using namespace std;

// function declaration
void printLine();

int main()
{
    // function call
    printLine();

    return 0;
}

// function definition
void printLine()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Jyoti" << endl;
    }
}

// void means empty that means function will not return any value



// Example
bool checkPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        return true;
    }
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    bool prime = checkPrime(n);
    if (prime)
    {
        cout << "It is a prime number" << endl;
    }
    else
    {
        cout << "Not a prime number" << endl;
    }
}