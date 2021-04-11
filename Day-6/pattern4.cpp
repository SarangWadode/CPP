//       * * * * *
//     * * * * *
//   * * * * *
// * * * * *
#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    int n;
    cout << "Enter number of rows:- ";
    cin >> n;
    int m = n * 2 - 2;
    for (int i = 1; i <= n; i++)
    {
        int space = 1;
        //add space in each row
        while (space <= m)
        {
            cout << " ";
            space++;
        }
        m = m - 2;
        for (int j = 1; j <= n + 1; j++) //n+1 stars will be printed as per the question
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
