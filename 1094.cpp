#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long move = 0, arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(long long i=1;i<n;i++)
    {
        if(arr[i] < arr[i-1])
        {
            move += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    cout << move << endl;
    return 0;
}