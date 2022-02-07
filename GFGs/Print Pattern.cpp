class Solution{
public:
    vector<int>ans;
    vector<int> pattern(int N){
        // code here
        ans.push_back(N);
        if(N<=0){
            return ans;
        }
        pattern(N-5);
        ans.push_back(N);
        return ans;
    }
};
