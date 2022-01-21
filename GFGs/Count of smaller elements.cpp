int countOfElements(int arr[], int n, int x) 
{
    int temp=0;
    for(int i=0;i<n;i++){
        if(x>=arr[i]){
            temp++;
        }
    }
    return temp;
}
