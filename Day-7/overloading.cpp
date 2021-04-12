#include <bits/stdc++.h>

using namespace std;

void add(int n1, int n2)
{
    cout << n1 + n2 << endl;
    return;
}

void add(int n1, int n2, int n3)
{
    cout << n1 + n2 + n3 << endl;
    return;
}

void add(int n1, int n2, int n3, int n4)
{
    cout << n1 + n2 + n3 + n4 << endl;
    return;
}

int main(void)
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    add(a, b);

    return 0;
}