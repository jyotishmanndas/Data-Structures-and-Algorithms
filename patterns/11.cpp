

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (i == 0 || i == n - 1)
            {
                cout << j + 1;
            }
        }
        cout << endl;
    }
}

// if (i == 0 || i == n - i)
// {
//     cout << j + 1;
// }
// else
// {
//     if (j == 0 || j == n - i - 1)
//     {
//         if (j % 2 == 1)
//         {
//             cout << " ";
//         }
//         else
//         {
//             cout << j + 1;
//         }
//     }
// }


// 1
// 1 - 2
// 1 - - 3
// 1 - - - 4
// 1 2 3 4 5