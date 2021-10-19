class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumAlice=0, sumBob=0;
        for(int x:aliceSizes){
            sumAlice+=x;
        }
        
        for(int y:bobSizes){
            sumBob+=y;
        }
        vector<int>ans; 
        int a = aliceSizes.size() , b = bobSizes.size();
        for(int i=a-1;i>=0;i--){
            for(int j =b-1;j>=0;j--){
                int diff = aliceSizes[i] - bobSizes[j];
                if(sumAlice - diff == sumBob + diff){
                    ans.push_back(aliceSizes[i]);
                    ans.push_back(bobSizes[j]);
                    return ans;  
                }
            }
        }
        return ans;
    }
};
