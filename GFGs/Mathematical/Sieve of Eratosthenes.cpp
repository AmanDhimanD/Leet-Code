 vector<bool> ans(N+1,true);
        vector<int>v;
        ans[0] = ans[1] = false;
        for(int i=2;i<=N;i++){
            if(ans[i]==true){
                v.push_back(i);
                for(int j=2*i;j<=N;j+=i){
                    ans[j] = false;
                }
            }
        }
        
        return v;
