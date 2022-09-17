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

|    T.C. - O(N)    |     T.C. - O(N)	|
|------------------	|------------------	|
| int SqaureRoot(int n){ 	| int CubeRoot(int n){ 	|
| int i=1;         	| int i=1;         	|
| while(i*i <=n){ 	| while(i*i*i<=n){ 	|
| i++;             	| i++;             	|
| }                	| }                	|
| return (i-1);    	| return (i-1);    	|
| }                	| }                	|



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


