class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
      sort(arr , arr + n);
        vector<int> temp;
        for(int i=1;i< n;i++){
            if(arr[i-1] == arr[i]){
                temp.push_back(arr[i]);
                while(arr[i-1] == arr[i])
                    i++;
            }
        }
        if(temp.size() == 0)
            return {-1};
        else
            return temp;
    }
};
