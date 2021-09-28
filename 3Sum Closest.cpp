class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int result = INT_MAX, sum = 0;
        sort(begin(nums),end(nums));
        for(int i=0 ; i<n ; i++)
        {
            int a1 = i+1;
            int a2 = n-1;
            while(a1 < a2)
            {
                int newArray = nums[i] + nums[a1] + nums[a2];
                if(abs(target - newArray) < abs(result))
                {
                    result = target - newArray;
                    sum = newArray;
                }
                if(newArray < target) 
                    a1++;
                else 
                    a2--;
            }
        }
        return sum;
    }
};
