#include <bits/stdc++.h>

using namespace std;

int add(int n1, int n2, int n3 = 0, int n4 = 0)
{
    return n1 + n2 + n3 + n4;
}

int main()
{
    int a = 3;
    int b = 4;
    int c = 7;
    int d = 3;
    cout << add(a, b) << endl;
    cout << add(a, b, c) << endl;
    cout << add(a, b, c, d) << endl;
    return 0;
}