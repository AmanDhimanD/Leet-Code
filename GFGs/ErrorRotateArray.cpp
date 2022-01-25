#include <iostream>
using namespace std;
void rotByOne(int a[],int n){
    int temp=a[0];
    for(int i=0;i<n;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}
void rot(int a[],int d,int n){
    for(int i=0;i<d;i++){
        rotByOne(a,n);
    }
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long int n, rt;
	    cin>>n>>rt;
	    long int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    rot(a[n],rt,n);
	    print(a[n],n);
	    cout<<endl;
	}
	return 0;
}
