#include <iostream>
using namespace std;

typedef long long int ll;
int main()
{
    //number is perfect or not.
    //if sum of all the factors of num =num ,then it is perfect number.

    ll num, sumofFactors = 0;
    cout << "Enter number :- " << endl;
    cin >> num;

    //logic
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sumofFactors += i;
        }
    }

    if (sumofFactors == num)
    {
        cout << num << " is a Perfect number.";
    }
    else
    {
        cout << num << " is not a Perfect number.";
    }

    return 0;
}