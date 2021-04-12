#include <bits/stdc++.h>

using namespace std;

void printResult(int n1, int n2)
{
    cout << ((((n1 + n2) / 2) * 57) + 12) << endl;
    return;
}

int main(void)
{
    int a, b;

    cin >> a >> b;

    printResult(a, b);

    int c, d;

    cin >> c >> d;

    printResult(c, d);

    return 0;
}