class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>s;
        
        for(int i=0;i<ops.size();i++)
        {
            
            if(ops[i][0]=='C')
            {
                s.pop();
            }
            else if(ops[i][0]=='D')
            {
                s.push(s.top()*2);
            }
            else if(ops[i][0]=='+')
            {
                int k=s.top();
                s.pop();
                int k1=s.top();
                
                s.push(k);
                s.push(k1+k);
            }
            else
            {
               int k=stoi(ops[i]);
                s.push(k);
            }
        }
        int sum=0;
        while(!s.empty())
        {
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};
