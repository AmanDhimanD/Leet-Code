#include <iostream>
using namespace std;
long sum(long n){
    if(n<=1){
        return n;
    }
    return (n+sum(n-1));
}
int main() {
	long n;
	cin>>n;
	cout<<sum(n);
	return 0;
}
