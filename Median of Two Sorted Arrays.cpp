class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int i=0,j=0,mid;        
        
        mid=(nums1.size() + nums2.size())/2;
        int isOdd = ((nums1.size() + nums2.size())%2);
        int end = isOdd ? mid :mid+1;
        
        while (i<nums1.size() && j<nums2.size() && res.size()<=end){
            int t;
            if(nums1[i]>nums2[j])
            {
                t=nums2[j];
                j++;
            }
            else{
                t=nums1[i];
                i++;
            }
            res.push_back(t);
        }    
        
        while(i<nums1.size() && res.size()<=end){
            res.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size() && res.size() <=end){
            res.push_back(nums2[j]);
            j++;
        }
        if(isOdd)
        {
            return (double)res[mid];
        }
        else{
            return ((double)res[mid]+double(res[mid-1]))/2.0;
         }  
    }
};
