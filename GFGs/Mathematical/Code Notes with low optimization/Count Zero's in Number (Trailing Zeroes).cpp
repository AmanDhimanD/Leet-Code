#include <bits/stdc++.h>

using namespace std;
vector<int> isPrime(int n){
    vector<int>v;
    int c=2;
    while(n>1){
        if(n%c==0){
            //cout<<c<<" ";
            v.push_back(c);
            n/=c;
        }
        else{
            c++;
        }
    }
    return v;
}
int main()
{
    int N = 200;
    vector<int>ans;
    ans = isPrime(N);
    int count2=0,count5=0;
    for(int i=0;i<ans.size();i++){
        if(ans[i]==2){
            count2++;
        }
        if(ans[i]==5){
            count5++;
        }
    }
    
    if(count2==count5){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
