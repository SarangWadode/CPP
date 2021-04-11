//     *       *
//   *   *   *   *   *
// *       *       *
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int rows = 3; //as number of rows are fixed
    int m = rows * 2 - 2;
    int totalpoints, points;                   //points is for total points in a row which we will calculate
    cout << "Enter total number of points:- "; //Total points to be ploted
    cin >> totalpoints;
    for (int i = 1; i <= rows; i++)
    {
        int space = 1;
        //add space in each row 4 in 1st,2 in 2nd,0 in 3rs
        while (space <= m)
        {
            cout << " ";
            space++;
        }
        m = m - 2; //decreasing the value of spaces by 2

        //for row 1
        if (i == 1)
        {
            points = (totalpoints + 1) / 4; // total points in row 1
            for (int j = 1; j <= points; j++)
            {
                cout << "*       "; //7 spaces after *
            }
        }

        // for row 2
        else if (i == 2)
        {
            points = (totalpoints / 2); // total points in row 2
            for (int j = 1; j <= points; j++)
            {
                cout << "*   "; //3 spaces after *
            }
        }

        //for row 3
        else
        {
            points = (totalpoints + 3) / 4; // total points in row 3
            for (int j = 1; j <= points; j++)
            {
                cout << "*       "; //7 spaces after *
            }
        }
        cout << endl;
    }
    return 0;
}