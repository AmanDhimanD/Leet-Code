class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size = m+n;
        while(m>0 && n>0){
            if(nums1[m-1]>nums2[n-1]){
                nums1[size-1]=nums1[m-1];
                --m;
            }
            else{
                nums1[size-1]=nums2[n-1];
                --n;
            }
                --size;
            }
        while(n>0){
            nums1[size-1] = nums2[size-1];
            --n;
            --size;
        }
    }
};
