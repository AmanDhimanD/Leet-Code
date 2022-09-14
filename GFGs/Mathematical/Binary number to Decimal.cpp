 int binary_to_decimal(string str) {
        // Code here.
        string tempStr = str; //copy the str
        int decVal = 0; //result into decimal 
        int base = 1; // base - 2^0 
        int len = str.length(); //length of string
        for(int i=len-1;i>=0;i--){
            //loop from last string 
            if(tempStr[i] == '1'){
                //if last digit 1 then 1*2^i 
                //add it into decimal 
                decVal+=base;
            }
            base*=2;
        }
        return decVal;
    }
