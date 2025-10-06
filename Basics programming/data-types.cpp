#include <iostream>
using namespace std;

int main()
{
    // default value of this int will be garbage value
    int a;
    cout << a << endl;

    // int -> 4 byte
    int num = 50;
    cout << num << endl;

    // It prints the size of int data type
    cout << "size of int : " << sizeof(num) << endl;

    // character -> 1 byte
    char ch = 'J';
    cout << ch << endl;
    cout << "size of char: " << sizeof(ch) << endl;

    // float -> 4 byte
    float point = 50.5;
    cout << point << endl;
    cout << "size of float: " << sizeof(point) << endl;

    // long -> 4 byte
    // In long the byte size may vary based on the system architecture (32-bit or 64-bit). In

    long bigNum = 500000;
    cout << bigNum << endl;
    cout << "size of long: " << sizeof(bigNum) << endl;
}