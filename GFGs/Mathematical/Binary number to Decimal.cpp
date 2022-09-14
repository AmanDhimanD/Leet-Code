int binary_to_decimal(string str) {
        // Code here.
        string tempStr = str;
        int decVal = 0;
        int base = 1;
        int len = str.length();
        for(int i=len-1;i>=0;i--){
            if(tempStr[i] == '1'){
                decVal+=base;
            }
            base*=2;
        }
        return decVal;
    }
