void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]) min = j; 
        }
        swap(arr[min],arr[i]);
    }
}

//--- Complete Code
#include <iostream>

using namespace std;
void swap(int *a,int *b){
      int temp=*a;
      *a=*b;
      *b=temp;
}
void selectionSort(int arr[], int n)
{   
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]) min = j; 
        }
        swap(arr[min],arr[i]);
    }
}
int main()
{
      int arr[4]={4,3,2,1};
      selectionSort(arr,4);
      for(int i=0;i<4;i++){
            cout<<arr[i] <<" ";
      }
    return 0;
}
