#include <bits/stdc++.h>
using namespace std;

// Solution 2: 
int main(){
    long n;
    set<long> s;
    cin >> n;
    for(int i=0;i<n;i++){
        long elements;
        cin >> elements;
        s.insert(elements);
    }
    for(int j=1;j<=n;j++){  
        //std::set.find() return an iterator to the end if not find a element
        if(s.find(j) == s.end()){
            cout << j << endl;
        }
    }
    

    return 0;
}
