class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> umap;
        for( int num: nums ){
            umap[num]++;
        }
        
        int max = 0;
        for( auto itr = umap.begin() ; itr != umap.end() ;itr++ ){
            if( itr->second > max ){
                max = itr->second ;
            }
        }
        
        int L=0, R = nums.size()-1,i,j;
        for( auto itr = umap.begin() ; itr != umap.end() ;itr++ ){
            if( itr->second == max ){      
                i = 0, j = nums.size()-1;
                while( nums[i] != itr->first ){
                    i++;
                }
                while( nums[j] != itr->first ){
                    j--;
                }
                if( R-L > j - i ){
                    R = j ;
                    L = i;
                }
            }
            
        }
        
        return R-L+1;
    }
};
