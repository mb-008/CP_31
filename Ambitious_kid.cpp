#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    int mini = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int temp = 0;
    for (int i = 0; i < n; ++i)
    {
        temp = abs(arr[i]) - 0;
        mini = min(mini, temp);
    }
    cout << mini;
    return 0;
}