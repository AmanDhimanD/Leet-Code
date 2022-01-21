int sumElement(int arr[],int n)
{
    return accumulate(arr, arr+n, 0);
}
