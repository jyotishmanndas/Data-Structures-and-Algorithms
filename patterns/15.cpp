
// *********1*********
// ********2*2********
// *******3*3*3*******
// ******4*4*4*4******
// *****5*5*5*5*5*****

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // For stars
        for (int j = 0; j < 2 * n - i - 2 + 1; j++)
        {
            cout << "*";
        }

        // For numbers
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 1)
            {
                cout << "*";
            }
            else
            {
                cout << i + 1;
            }
        }

        // For stars
        for (int j = 0; j < 2 * n - i - 2 + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}