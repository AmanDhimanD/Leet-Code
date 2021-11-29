class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int>dup;
        vector<string>v;
        for(auto a:words)
            for(auto b:a)
                dup[b]++;
        for(auto c : dup){
          vector<int> charFreq(words.size(), 0);
        
          for(auto& str : words)
            for(char strC : str)
              if(c.first == strC)
                ++charFreq[distance(&words[0], &str)];
        
    
          int lowestFreq = *min_element(charFreq.begin(), charFreq.end());
          
          if(lowestFreq == 0) 
            continue;
            
          for(int i = 0; i < lowestFreq; ++i)
            v.push_back(string{c.first});
          
        }
        return v;
    }
};
