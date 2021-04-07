#include <iostream>

using namespace std;

int main(void)
{

    int a, b, c;
    // a = 10;
    // b = 5;
    // c = 100;

    //Using relational operator
    // cout << "is a>b ? " << (a > b) << endl;
    // cout << "is a<b ? " << (a < b) << endl;
    // cout << "is a>=b ? " << (a >= b) << endl;
    // cout << "is a<=b ? " << (a <= b) << endl;
    // cout << "is != b ? " << (a != b) << endl;
    // cout << "is a == b ? " << (a == b) << endl;

    //adding toppings
    // cout << "is a>b and a>c " << (a > b && a > c) << endl;

    //conditionals
    cout << "Enter three values" << endl;
    cin >> a >> b >> c;
    // if (a > b && a > c)
    // {
    //     cout << "a is greater" << endl;
    // }
    // else if (b > c)
    // {
    //     cout << "b is greater" << endl;
    // }
    // else
    // {
    //     cout << "c is greater" << endl;
    // }

    if (a > b, a > c) //comma(,) returns the last value
    {
        cout << "hii" << endl;
    }
    else
    {
        cout << "bye" << endl;
    }

    return 0;
}
