int Search(vector<int> vec, int K) {
    //code here
    int size = vec.size();
    int low=0,high = size-1;
    while(low<=high){
        int mid = (low+high)>>1;
        
        if(vec[mid]==K){
            return mid;
        }
        if(vec[low]<=vec[mid]){
            if(K>=vec[low] && K<=vec[mid]){
                high = mid-1;
            }
            else{
                low =mid+1;
            }
        }
        else{
            if(K>=vec[mid] && K<=vec[high])
            {
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}
