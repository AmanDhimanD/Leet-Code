public:
    long long lcm(int a, int b)
{
    return (a / GCD(a, b)) * b;
}
long long GCD(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a>b){
        return GCD(a-b,b);
    }
    else{
        return GCD(a,b-a);
    }
}
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        
        vector<long long>ans;
        ans.push_back(lcm(A,B));
        ans.push_back(GCD(A,B));
        
        return ans;
        
    }
