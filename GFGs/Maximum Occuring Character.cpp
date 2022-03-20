char getMaxOccuringChar(string str)
    {
        int arr[26] = {0}; // all initially with zero
        for(int i=0;i<str.length();i++){
            char ch = str[i]; // store char one by one 
            int number = 0;
            number  = ch - 'a'; // Change in number ASCII
            arr[number]++; // increment the value frequency 
        }
        int max = -1,ans=0;
        for(int i=0;i<26;i++){
            if(max<arr[i]){ 
                ans = i; // store index of occurence character 
                max = arr[i]; // store occurence character into max as integer
            }
        }
        return (ans + 'a'); // change the value into the character 
    }
