# Leet-Code 😍🥰

**This is Sorting Method in STL C++;** 🤩
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    sort(v.begin(), v.end());
    cout << "Sorted \n";
    for (auto x : v)
        cout << x << " ";
    return 0;
}
```
**Square Root Without using inbuilt Functions** 😎
```
#include<stdio.h>

void main()
{
    int number;

    float temp, sqrt;

    printf("Provide the number: \n");

    scanf("%d", &number);

    // store the half of the given number e.g from 256 => 128
    sqrt = number / 2;
    temp = 0;

    // Iterate until sqrt is different of temp, that is updated on the loop
    while(sqrt != temp){
        // initially 0, is updated with the initial value of 128
        // (on second iteration = 65)
        // and so on
        temp = sqrt;

        // Then, replace values (256 / 128 + 128 ) / 2 = 65
        // (on second iteration 34.46923076923077)
        // and so on
        sqrt = ( number/temp + temp) / 2;
    }
    printf("The square root of '%d' is '%f'", number, sqrt);
}
```
**Count Frequency of Numbers**
```
 int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
          mp[arr[i]]++;
    }
    for(auto x:mp){
          cout<<x.first <<" "<<x.second<<endl;
    }
```
**Binary Search** 
- small trick (optimization) 🤑🤑
```
mid = start + (end - start)/2;
```
```
#include <iostream>
int binarySearch(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
          if(arr[mid]==key){
               return mid;
          }
          if(arr[mid]>key){
                e=mid-1;
          }
          else{
                s=mid+1;
          }
          mid = s +(e-s)/2;
    }
    return -1;
}
using namespace std;

int main()
{
    int arr[5] = {4,1,3,5,6};
    
    cout<<binarySearch(arr,5,3);

    return 0;
}

```
**First and Last Occurence in Sorted Array
