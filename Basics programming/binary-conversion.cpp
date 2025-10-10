#include <iostream>
#include <cmath>
using namespace std;

// Decimal to binary conversion

// Method 1
// Division Method

int decimalToBinary(int n)
{
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n / 2;
    }
    return binaryno;
}

int main()
{
    int n;
    cin >> n;
    int binary = decimalToBinary(n);
    cout << binary;
}

// Method 2
// Bitwise Method

int decimalToBinary(int n)
{
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }
    return binaryno;
}

int main()
{
    int n;
    cin >> n;

    int binary = decimalToBinary(n);
    cout << binary;
}


// Binary to decimal conversion

int binaryToDecimal(int n)
{
    int decimal = 0;
    int i = 0;

    while (n > 0)
    {
        int bit = n % 10;
        decimal = decimal + bit * pow(2, i++);
        n = n / 10;
    }
    return decimal;
}

int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
}
