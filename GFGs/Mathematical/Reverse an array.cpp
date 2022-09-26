#include <iostream>
using namespace std;
void reverse(int arr[],int size){
    int s=0,e=size-1;
    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
	//code
	int t=0;
	cin>>t;
	while(t--){
	    int size=0;
	    cin>>size;
	    int arr[size];
	    for(int i=0;i<size;i++){
	        cin>>arr[i];
	    }
	        reverse(arr,size);
	        print(arr,size);
	    }
	    
	return 0;
}
