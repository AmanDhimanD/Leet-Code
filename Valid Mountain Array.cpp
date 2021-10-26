class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool flag =false;
         if(arr.size() < 3)
            return false;
        
        if(arr[1] <= arr[0])
            return false;
 
        for (int i =2 ; i< arr.size() ; i++){
             if(arr[i] == arr[i-1]){
                return false; 
             } 
             if(arr[i] < arr[i-1]){
                 flag = true; 
             }
             else if(flag){
                 return false;
             }
        }
        return flag;
    }
};
