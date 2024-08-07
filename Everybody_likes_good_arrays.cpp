#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        { // check krenge agar next element same parity ka hai toh do the operation
            count += (a[i] % 2 == a[i + 1] % 2);
        }
        cout << count << endl;
    }
    return 0;
}