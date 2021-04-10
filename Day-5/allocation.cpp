#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int m = 1; m <= t; m++)
    {
        int n, b;
        cin >> n >> b;
        int cost[n];
        for (int i = 0; i < n; i++)
        {
            cin >> cost[i];
        }

        sort(cost, cost + n);

        int ptr = 0, count = 0;
        while (ptr < n && b >= cost[ptr])
        {
            b = b - cost[ptr];
            count++;
            ptr++;
        }

        cout << "Case #" << m << ": " << count << endl;
    }
    return 0;
}