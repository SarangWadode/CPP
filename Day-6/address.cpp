#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int bond = 7;
    int *ptr = &bond;

    //let's use &
    cout << "Value of bond " << bond << endl;
    cout << "Address of bond " << ptr << endl;
    cout << "value of variable bond extracted via pointer " << *ptr << endl; // * dereference operator

    float arr[10] = {5.2, 1, 23, 4, 5, 6};
    float *arr_ptr = arr; //& is optional in array

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << "Arr[" << i << "] = " << *(arr_ptr + i) << "  " << (arr_ptr + i) << endl;
    }
}