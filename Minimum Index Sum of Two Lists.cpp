class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int minSum = list1.size() + list2.size(); 
        
        vector<string> com;
        
        for(int i = 0; i < list1.size(); i++){
            int sum;
            for(int j = 0; j < list2.size(); j++){
                if(list1[i] == list2[j]){
                    sum = i+j;
                    if(sum <= minSum){
                        if(sum < minSum){
                            com.clear(); 
                        }
                        minSum = sum;
                        com.push_back(list1[i]); 
                    }
                }
            }
        }
        return com;
    }
};
