- Dry and run codes are store in this folder

#### Array Operations

- Searching 
```
int searchElement(int arr[],int n,int size){
    
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            return i;
        }
    }
    return -1;
}
```

- Insertion
```
int* insertX(int n, int arr[],int x, int pos){
    
    //cout<<"Size "<<n<<" "<<"X "<<x<<" "<<"Position "<<pos<<" "<<endl;
    
    // increase the size by 1
    n++; //size of array 
    
    // shift elements forward
    for (int i = n; i >= pos; i--){
        arr[i] = arr[i - 1]; 
    }
    // insert x at position
    arr[pos - 1] = x;
    return arr;
}
```

- Deletion 
```
int deleteElement(int arr[],int size,int ele){
    int i=0;
    for(i=0;i<size;i++){
        if(arr[i]==ele) break;
    }
    if(i<size){
        size-=1;
        for(int j=i;j<size;j++){
            arr[j]=arr[j+1];
        }
    }
    return size-1;
}

```
