class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
    
        sort(nums.begin(),nums.end());
        return max(nums[0]*nums[1]*nums[n-1], nums[n-1]*nums[n-2]*nums[n-3]);
    }
};


// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
   /*  int arr[] = {5, 7, 4, 3, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << arr[size - 1] * arr[size - 2] * arr[size - 3]; */

    // 2nd Approach
    //Case Handle If Number has negative so make it positive first

    /* int arr[] = {-1, -4, -5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    for ( i = 0; i < size; i++)
    {
        if(arr[i]<0){
            arr[i] = arr[i] * (-1);
        }
    }
    sort(arr, arr + size);
    // for (i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << arr[size - 1] * arr[size - 2] * arr[size - 3]; */


    //3rd Approach
//    vector<int> v{-1, -4, -5, 6};
//    int size = v.size();

//    for (int i = 0; i < size;i++)
//    {
//        if(v[i]<0){
//            v[i] *= (-1);
//        }
//    }
//    sort(v.begin(), v.end());
//    cout << v[size-1] << endl;
//    cout << v[size-2] << endl;
//    cout << v[size-3] << endl;
//    cout << v[size-1] * v[size - 2] * v[size - 3];
//    return 0;
// }
