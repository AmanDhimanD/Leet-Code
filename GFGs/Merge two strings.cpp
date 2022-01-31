
string merge (string S1, string S2)
{
    // your code here
    string res="";
    int a=0,b=0;
    for(int i=0;i<(S1.length()+S2.length());i++){
        if(a<S1.length()){
            res+=S1[a];
        }
        if(b<S2.length()){
            res+=S2[b];
        }
        a++;b++;
    }
        return res;
}
