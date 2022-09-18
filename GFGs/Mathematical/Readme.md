# Quick Guide


### Sieve Algorithm 

#### Prime Numbers - T.C - O(n)

- Prime Factors
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

|    T.C. - O(N)    |     T.C. - O(N)	|
|------------------	|------------------	|
| int SqaureRoot(int n){ 	| int CubeRoot(int n){ 	|
| int i=1;         	| int i=1;         	|
| while(i*i <=n){ 	| while(i*i*i<=n){ 	|
| i++;             	| i++;             	|
| }                	| }                	|
| return (i-1);    	| return (i-1);    	|
| }                	| }                	|


## Sieve of Eratosthenes - GFG Solution

```
vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        
        vector<bool> ans(N+1,true);
        vector<int>v;
        ans[0] = ans[1] = false;
        for(int i=2;i<=N;i++){
            if(ans[i]==true){
                v.push_back(i);
                for(int j=2*i;j<=N;j+=i){
                    ans[j] = false;
                }
            }
        }
        
        return v;
    }

```














#### Quick 

- Prime Number 1 to n Algorithm (not optimize)

```
#include <bits/stdc++.h>

using namespace std;
vector<bool>pf(100,true);

int main()
{
    int n  = 100;
    
    /*for(int i  = 2; i<=sqrt(n);i++){
        cout<<i<<" ";
    }*/
    pf[0] = pf[1] = true;
    for(int i=2;i<=n;i++){
        if(pf[i]==true){
            for(int j=2*i;j<n;j=j+i){
                pf[j]  = false;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(pf[i]==true){
            cout<<i<<" ";
        }
    }
    

    return 0;
}

```


#### Tips 

- Modulo 
- we are required to answer the result in 10^9+7 modulo. The reason behind this is, if problem constraints are large integers, only efficient algorithms can solve them in an allowed limited time. 


