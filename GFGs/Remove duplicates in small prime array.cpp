class Solution{
  public:
    vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        unordered_map<int,int>m;
        vector<int>temp;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
            if(m[arr[i]]==1){
            temp.push_back(arr[i]);
            }
        }
        return temp;
    }
};
