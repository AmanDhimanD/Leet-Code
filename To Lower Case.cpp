
class Solution {
public:
    string toLowerCase(string s) {
        //STL Function
        transform(s.begin(),s.end(),s.begin(),::tolower);
        return s;
    }
};
