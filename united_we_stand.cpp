#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve()

{
    int n;
    cin >> n;
    vector<int> inp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
    }
    sort(inp.begin(), inp.end());
    if (inp.back() == inp[0])
    {
        cout << "-1\n";
        return;
    }
    else
    {
        int it = 0;
        while (inp[it] == inp[0])
        {
            it++;
        }
        cout << it << " " << n - it << "\n";
        for (int i = 0; i < it; i++)
            cout << inp[i] << " ";
        for (int i = it; i < n; i++)
            cout << inp[i] << " ";
    }
    return;
}

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}