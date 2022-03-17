void swapped(int *a,int *b){
        int temp = *a;
        *a=*b;
        *b=temp;
}
void insertionSort(int n, vector<int> &arr){
    
    for(int i=0;i<arr.size();i++){
            for(int j=i;j>=1;j--){
                    if(arr[j]<arr[j-1]){
                        swapped(&arr[j],&arr[j-1]);
                    }
                    else{
                            break;
                    }
            }
    }
}
