class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal){
            return 1;
        }else{
            string temp =s;
            temp = temp.substr(1)+temp[0];
            while(temp !=s){
                if(temp==goal){
                    return 1;
                }
                temp = temp.substr(1)+temp[0];
         
            }
            return 0;
        }
    }
};
