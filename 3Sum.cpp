class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int i,j,k;
        int n=nums.size();
        for(int i=0;i<n-2;i++)
        {   
            j=i+1;
            k=n-1;
            while(j<k)
            {   
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    vector<int>arr(3);
                    arr[0]=nums[i];
                    arr[1]=nums[j];
                    arr[2]=nums[k];
                    s.insert(arr);
                    j++;
                    k--;
                }
                else if(sum>0)
                {
                    k--;
                }
                else if(sum<0)
                {
                    j++;
                }
            }
        }
        vector<vector<int>>result (s.begin(),s.end());
        return result;
    }
};
