void printPat(int n)
{
//Your code here
for(int i=0;i<n;i++){
    for(int j=n;j>0;j--){
        for(int k=0;k<n-i;k++){
            cout<<j<<" ";
        }
    }
    cout<<"$";
}

}
