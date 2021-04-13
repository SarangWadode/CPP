#include <bits/stdc++.h>

using namespace std;

int x = 45;

int main()
{
    int x = 18;
    cout << "value of x local block :- " << x << endl; //local scope
    {
        x = 7;
        cout << "value of x inside block :- " << x << endl; //x inside this block
    }
    cout << "value of x global block :- " << ::x << endl; //global scope(:: is scope resolution operator)
    return 0;
}