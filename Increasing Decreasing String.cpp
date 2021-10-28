class Solution {
public:
    string sortString(string s) {
        int n=s.size();
  int ar[26]={0};
  for(int i=0;i<n;i++){
      int k=s[i]-'a';
      ar[k]++;
  }
  string ans;
  int l=0;
  while(l<n){
      for(int i=0;i<26;i++){
          if(ar[i]>0){
              ans+=('a'+i);
              l++;
              ar[i]--;
          }
      }
      for(int i=25;i>=0;i--){
          if(ar[i]>0){
              ans+=('a'+i);
              l++;
              ar[i]--;
          }
      }
  }
  return ans;
    }
};
