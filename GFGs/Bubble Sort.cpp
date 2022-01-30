void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        for(int i =0;i<n-1;i++){
            for(int j =0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    // int temp = arr[j+1];
                    // arr[j+1] = arr[j];
                    // arr[j] = temp;
                    swap(&arr[j],&arr[j+1]);
                }
            }
        }
    }
};
