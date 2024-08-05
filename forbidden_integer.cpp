#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "Yes" << "\n";
            cout << n << "\n";
            while (n--)
            {
                cout << "1" << " ";
            }
        }
        else if ((k == 1) || ((k == 2) && (n % 2 == 1)))
        {
            cout << "No" << "\n";
        }
        else
        {
            cout << "Yes" << "\n";
            
        }
    }
}