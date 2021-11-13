class Solution {
public:
    int romanToInt(string s) {
        int n=s.length(),num,add=0;
        map<char,int> rom;
        rom.insert(make_pair('I',1));
        rom.insert(make_pair('V',5));
        rom.insert(make_pair('X',10));
        rom.insert(make_pair('L',50));
        rom.insert(make_pair('C',100));
        rom.insert(make_pair('D',500));
        rom.insert(make_pair('M',1000));
        
        for(int i=0;i<n;){
            if((rom[s[i]]>=rom[s[i+1]]) || i==(n-1)){
                num=rom[s[i]];
                i++;
            }
            else{
                num=(rom[s[i+1]]-rom[s[i]]);
                i=i+2;
            }
            add=add+num;
        }
        return add;
    }
};
