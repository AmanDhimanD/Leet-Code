class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    stringstream s{S};
	    string word ="";
	    string temp;
	    while(getline(s,temp,' ')){
	        word =  word + temp[0];
	    }
	    return word;
	}
};
