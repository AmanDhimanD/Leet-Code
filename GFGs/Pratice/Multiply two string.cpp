    string multiplyStrings(string s1, string s2) {
       //Your code here
       long long int a = stoi(s1);
       long long int b = stoi(s2);
       long long int c = a*b;
        
       string temp = to_string(c);
       return temp;
    }
