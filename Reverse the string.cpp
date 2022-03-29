void rev(string &str,int i,int j){
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    rev(str,i,j);
}
string reverseString(string str)
{
	// Write your code here.
    int len = str.length()-1;
    rev(str,0,len);
    return str;   
}
