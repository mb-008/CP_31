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
        float sum = 0;
        int prod = 1;
        int count = 0;
        int p, neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            prod *= a[i];
            if (a[i] == 1)
            {
                p++;
            }
            if (a[i] == -1)
            {
                neg++;
            }
        }
        if (sum < 0)
        {
            count = ceil(abs(sum) / 2);
            neg = neg - count;
            p = p + count;
            if (neg % 2 != 0)
            {
                count++;
            }
            cout << count << "\n";
        }
        else
        {
            if (prod == 1)
            {
                cout << "0" << "\n";
            }
            else if (prod = -1)
            {
                cout << "1" << "\n";
            }
        }
    }
    return 0;
}