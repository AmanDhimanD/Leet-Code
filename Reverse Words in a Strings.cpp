 string reverseWords(string s) {
        int k=0;
        int n=s.length();
        int i=0,j=0;
        
        reverse(s.begin(),s.end());
        while(j<n)
        {
            if(s[j]==' ')
            {
                reverse(s.begin()+i,s.begin()+j);
                i=j+1;
                j=i;
                continue;
            }
            j++;
        }
        reverse(s.begin()+i,s.begin()+j);
        
        string ans;
        i=0;
        while(s[i]==' ')
            i++;
        
        j=n-1;
        while(s[j]==' ')
            j--;
        
        for(;i<n and i<=j;i++)
        {
            if(s[i]==' ' and s[i+1]==' ')
                continue;
            ans.push_back(s[i]);
        }
        return ans;
