
// 1 2 3 4 5
// 2     5
// 3   5
// 4 5
// 5

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i == 0 || j == i || j == n - 1)
            {
                cout << j + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (i == 0 || i == n - 1)
//             {
//                 cout << j + 1 << " ";
//             }
//             else
//             {
//                 if (j == i || j == n - 1)
//                 {
//                     cout << j + 1 << " ";
//                 }
//                 else
//                 {
//                     cout << "  ";
//                 }
//             }
//         }
//         cout << endl;
//     }
// }