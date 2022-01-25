#include <iostream>
using namespace std;


void reverse(int arr[] ,  int st ,  int end )
{
   while(st <= end)
   {
       int temp = arr[st];
       arr[st] = arr[end];
       arr[end] = temp;
       
       st++;
       end--;
   }

void rotate(int arr[] , int n , int d)
{
   if(d == 0)
       return ;
   
   d = d % n ;
   
   reverse(arr ,  0 , d-1);
   reverse(arr , d , n-1);
   reverse(arr , 0 , n-1);
   
   for(int i = 0 ; i < n ; i++)
       {
           cout<<arr[i] <<" ";
       }
       cout<<endl;
}
int main() {
   
   int tCase;
   cin>>tCase;
   
   for(int i = 1  ; i <= tCase ; i++)
   {
       int n , d;
       cin >> n >> d;
       
       int arr[n];
       for(int i = 0 ; i < n ; i++)
       {
           cin>>arr[i];    
       }
       
       rotate(arr , n , d);
       
       
   }

return 0;
}
