//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter number of rows:- " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int space = 1;
        //to add spaces before printing the number
        while (space <= n - i)
        {
            cout << " ";
            space++;
        }
        //print numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j << " "; //jth number will be printed
        }
        cout << endl;
    }
    return 0;
}