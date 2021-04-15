//amazon interview question

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
int main()
{
    ll n;
    //enter total numbers
    cin >> n;
    ll arr[n];
    //fetch array from user
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //logic
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }

    cout << res << endl;

    return 0;
}