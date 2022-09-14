long long int largestPrimeFactor(int N){
        // code here
        vector<long long int>ans;
        for(int i=2;i<=N;i++){
            
            while(N%i ==0){
                ans.push_back(i);
                N/=i;
            }
        }
        sort(ans.begin(),ans.end());
        
        //long long int ans1 = ans[ans.size()-1];
        //long long int ans1 = ans.back();
        return ans.back();
    }
/*
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
*/
