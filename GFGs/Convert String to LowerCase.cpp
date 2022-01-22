class Solution {
  public:
    string toLower(string S) {
        // code here
        transform(S.begin(), S.end(), S.begin(), ::tolower);
        return S;
    }
};
