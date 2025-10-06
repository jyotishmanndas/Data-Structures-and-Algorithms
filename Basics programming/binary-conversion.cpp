#include <iostream>
#include<cmath>
using namespace std;

// Method 1
// Division Method
int decimalToBinary(int n) {
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryno = bit*pow(10, i++) + binaryno;
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


// Mehod 2 
// Bitwise Meth od
