#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cout << "Enter number of lines :- " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}