# Quick Guide


### Sieve Algorithm 
#### Prime Numbers - T.C - O(n)
```
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int>a;
    for(int i=2;i<=N;i++){
        while(N%i==0){
            cout<<"i -> "<<i<<endl;
            a.push_back(i);
            cout<<"N -> "<<N<<" "<<endl;
            N/=i;
        }
    }
    
    for(auto p:a){
        cout<<"->"<<p<<" ";
    }

    return 0;
}
```

### Square Root and Cube Roots 

|      /* TC - O(N) */     	|   	|     /* TC - O(N) */    	|   	|   	|
|:----------------------:	|---	|:--------------------:	|---	|---	|
| int SquareRoot(int n){ 	|   	| int CubeRoot(int n){ 	|   	|   	|
| int i=1;               	|   	| int i=1;             	|   	|   	|
| while(i*i<=n){         	|   	| while(i*i*i<=n){     	|   	|   	|
| i++;                   	|   	| i++;                 	|   	|   	|
| }                      	|   	| }                    	|   	|   	|
| return (i-1);          	|   	| return (i-1);        	|   	|   	|
| }                      	|   	| }                    	|   	|   	|