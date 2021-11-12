class Solution {
public:
    string sortSentence(string s) {
        map<int,string> mp;
        string ans="",temp="";
        int pos=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                pos=temp.back();
                temp.pop_back();
                mp[pos]=temp;
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        pos=temp.back();
        temp.pop_back();
        mp[pos]=temp;
        for(auto x:mp){
            ans+=x.second;
            ans+=' ';
        }
        ans.pop_back(); 
        return ans;
    }
};
