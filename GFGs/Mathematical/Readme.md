# Quick Guide


### Sieve Algorithm 
- T.C - O(n)
```
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int>a;
    for(int i=2;i<=N;i++){
        while(N%i==0){
            cout<<"i -> "<<i<<endl;
            a.push_back(i);
            cout<<"N -> "<<N<<" "<<endl;
            N/=i;
        }
    }
    
    for(auto p:a){
        cout<<"->"<<p<<" ";
    }

    return 0;
}

```
