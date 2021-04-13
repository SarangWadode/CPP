#include <bits/stdc++.h>

using namespace std;
//swap by values
void swap_by_values(int n1, int n2)
{
    cout << "Function values before:-  " << n1 << ", " << n2 << endl;
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "Function values after:-  " << n1 << ", " << n2 << endl;
}

//swap by reference
void swap_by_reference(int &n1, int &n2)
{
    cout << "Function values before:-  " << n1 << ", " << n2 << endl;
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "Function values after:-  " << n1 << ", " << n2 << endl;
}

//swap by address
void swap_by_address(int *n1, int *n2)
{
    int temp;
    cout << "Function values before:-  " << *n1 << ", " << *n2 << endl;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    cout << "Function values after:-  " << *n1 << ", " << *n2 << endl;
}

int main()
{
    int a = 3, b = 5;

    cout << "main values before swap:-  " << a << ", " << b << endl;
    swap_by_values(a, b);
    cout << "main values after swap:-  " << a << ", " << b << endl;
    cout << endl
         << endl;

    cout << "main values before swap:-  " << a << ", " << b << endl;
    swap_by_reference(a, b);
    cout << "main values after swap:-  " << a << ", " << b << endl;
    cout << endl
         << endl;

    cout << "main values before swap:-  " << a << ", " << b << endl;
    swap_by_address(&a, &b);
    cout << "main values after swap:-  " << a << ", " << b << endl;
    cout << endl
         << endl;

    return 0;
}