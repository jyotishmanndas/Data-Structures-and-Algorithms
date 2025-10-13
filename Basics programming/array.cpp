#include <iostream>
using namespace std;

// int main()
// {
//     // array creation
//     int arr[10];
//     char alpha[20];
//     bool flags[10];
//     long bum[5];
//     short snum[20];

//     cout << "Array created successfully" << endl;

//     // To print the address of arr.
//     cout << "Address of a:" << &arr << endl;
//     cout << "Address of a:" << arr << endl;

//     // Array initialisation.
//     int arr[] = {1, 2, 3, 4, 5};
//     int brr[5] = {1, 2, 3, 4, 5};
//     int crr[5] = {1, 2};
//     int drr[2] = {1, 2, 3, 4, 5};

//     int arr[5] = {1,2,3,4,5};
//     for(int i=0; i<5; i++){
//         cout << arr[i] << " ";
//     }
// }

// target found
// bool print(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// Reverse an array
void reverseArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    };

    // printing a reverse array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // questions

    // int brr[5];
    // int n = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> brr[i];
    // }

    // // doubles
    // for (int i = 0; i < n; i++)
    // {
    //     brr[i] = 2 * brr[i];
    // }

    // // printing doubles
    // for (int i = 0; i < n; i++)
    // {
    //     cout << brr[i] << " ";
    // }

    // target found
    // int arr[5] = {1, 2, 3, 4, 5};
    // int size = 5;
    // int target = 7;

    // bool found = print(arr, size, target);

    // if (found)
    // {
    //     cout << "target match";
    // }
    // else
    // {
    //     cout << "target not found";
    // }

    // Reverse an array
    int arr[7] = {20, 40, 60, 80, 100, 120, 140};
    int size = 7;

    reverseArray(arr, size);
}