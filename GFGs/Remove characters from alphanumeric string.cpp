class Solution{
public:	

	string removeCharacters(string S) 
	{
	    // Your code goes here
	    string temp ="";
	    for(int i=0;i<S.length();i++){
	        if(S[i]>='0' && S[i]<='9'){
	            temp=temp+S[i];
	        }
	    }
	    return temp;
	}
};
