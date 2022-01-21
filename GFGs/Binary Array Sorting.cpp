class Solution{
    public:
    vector<int> SortBinaryArray(vector<int> binArray)
    {
         int count=0;
       int n=binArray.size();
       for(int i=0;i<n;i++){
           if(binArray[i]==0)
           count+=1;
       }
       for(int i=0;i<count;i++){
           binArray[i]=0;
       }
       for(int i=count;i<n;i++){
           binArray[i]=1;
       }
       
       return binArray;
   }
};
