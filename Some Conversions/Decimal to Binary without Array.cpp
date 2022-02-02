#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{     
      int n;
      cin>>n;

     long long binary=0,rem,i=1;
     while(n!=0){
           rem = n%2;
           n/=2;
           binary += rem*i;
           i = i*10;
     }
     cout<<binary;
    return 0;
}
