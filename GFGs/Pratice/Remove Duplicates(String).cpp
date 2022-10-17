string removeDups(string S) 
	{
	    // Your code goes here
	    unordered_map<int,int>mp;
	    string str="";
	  
	    for(int i=0;i<S.size();i++){
	        mp[S[i]]++;
	        if(mp[S[i]]==1){
	            str.push_back(S[i]);
	        }
	    }
	    return str;
	}
