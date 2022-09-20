- Dry and run codes are store in this folder

* Array Operations

- Insertion
```
int* insertX(int n, int arr[],int x, int pos){
    
    cout<<"Size "<<n<<" "<<"X "<<x<<" "<<"Position "<<pos<<" "<<endl;
    // increase the size by 1
    n++;
    // shift elements forward
    for (int i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
    // insert x at pos
    arr[pos - 1] = x;
    return arr;
}
```
