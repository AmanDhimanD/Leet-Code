class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        
        string s="";
        for(int i=0;i<n;i++){
            s = s+ arr[i];
        }
        return s;
    }
};
