#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int max = 1, current = 1;

    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == s[i-1])
        {
            current++;
        }else
        {
            if(current > max)
            {
                swap(current,max);
            }
            current = 1;
        }

    }

    if(current > max)
    {
        swap(current, max);
    }

    cout << max << endl;

    return 0;

}