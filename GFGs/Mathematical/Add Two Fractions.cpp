long long gcd(int a, int b){
    return (b==0 ? a : gcd(b,a%b));
}
void addFraction(int num1, int den1, int num2,int den2)
{
    //Your code here
    int numX = (num1*den2+num2*den1);
    int dem = den1*den2;
    
    int demY = gcd(numX,dem);
    
    cout<<numX/demY<<"/"<<dem/demY<<endl;


 }
 
