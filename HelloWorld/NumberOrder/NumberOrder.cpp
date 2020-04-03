// NumberOrder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Enter three numbers!" << std:: endl;
    int arr [3];
    int n = sizeof(arr) / sizeof(arr[0]);

    cin >> arr[0] >> arr[1] >> arr[2];
    
    sort(arr, arr + n);

    for (int i = 0; i <= 2; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}


