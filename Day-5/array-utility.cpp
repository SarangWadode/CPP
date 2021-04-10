#include <bits/stdc++.h> //godfather of library

using namespace std;

int main(void)
{
    //unknown size
    // int arr[]={1,2,3,4,5,6,7};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<size<<endl;

    //fetch array from user
    int n;
    cout << "Enter array size:- ";
    cin >> n;

    int arr[n];
    cout << "enter array elements:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //calculate sum of array
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "sum of array = " << sum << endl;

    //cool stuff
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}