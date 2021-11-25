class Solution {
public:
    bool judgeCircle(string moves) {
        int Ucounter = 0,Lcounter = 0,Dcounter = 0,Rcounter = 0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U'){
                Ucounter++;
            }
            else if(moves[i]=='L'){
                Lcounter++;
            }
            else if(moves[i]=='D'){
                Dcounter++;
            }       
            else if(moves[i]=='R'){
                Rcounter++;
            }
        }
        return (Ucounter==Dcounter && Lcounter==Rcounter);
    }
};
