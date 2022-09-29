bool isAnagram(string a, string b){
        
        // Your code here
        int n1 = a.length();
        int n2 = b.length();
        
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(n1!=n2){return false;}
        else{
        for(int i=0;i<n1;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        }
            return true;
        
    }
    
