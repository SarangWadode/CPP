#include <bits/stdc++.h>

using namespace std;

typedef unsigned int qbyte;

//cause I'am lazy
void output(qbyte a, qbyte b, qbyte res, string opr)
{
    cout << a << opr << b << " = " << res << "\n\n";
}
int main()
{
    qbyte a, b, res;
    cin >> a >> b;

    //bit wise and
    res = a & b;
    output(a, b, res, " & ");

    //bitwise or
    res = a | b;
    output(a, b, res, " | ");

    //biwise XOR [one of the bit should be set /both the bits should be different]
    res = a ^ b;
    output(a, b, res, " ^ ");

    //left shift
    int x = 1; //number of bits to shift left
    res = a << x;
    output(a, x, res, " << ");

    //Important XOR property   A ^ A = 0 | 0 ^ A = A
    res = a ^ a; //xor with same no. is always 0;
    // res=a^a^a; 0000 | 0011    a
    output(a, a, res, " ^ ");

    //If a number is odd or even
    // if (a & 1 == 0)
    // {
    // }

    return 0;
}