class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        map<int,int> mp2;
        for(auto x:mp){
            mp2[x.second]++;
        }
        for(auto x:mp2){
            if(x.second!=1){
                return false;
            }
        }
        return true;
    }
};
