
// Full Pyramid

//    *
//   * *
//  * * *
// * * * *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // For space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // For stars
        for (int k = 0; k < i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Inverted Full Pyramid

// * * * *
//  * * *
//   * *
//    *

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // For space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // For stars
        for (int k = 0; k < n - i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

//            1
//          1 2 3
//        1 2 3 4 5
//     1 2 3 4 5 6 7
//   1 2 3 4 5 6 7 8 9

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < i + 1; k++)
        {
            cout << k + 1 << " ";
        }
        cout << endl;
    }
}

//     *
//    ***
//   *****
//  *******
// *********

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}