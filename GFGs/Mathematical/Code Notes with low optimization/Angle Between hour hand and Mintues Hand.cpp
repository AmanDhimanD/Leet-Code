//Clock Problem
// TC O(1) SC O(1)

#include <bits/stdc++.h>
using namespace std;
int getAngle(int H , int M) {
        // code here
        //return floor((11/2)*M - 30*H);
        
    float hour_angle = 0.5 * (H * 60 + M);
    float minute_angle = 6 * M;
    cout<<hour_angle<<endl;
    cout<<minute_angle<<endl;
    // Find the difference between two angles
    float angle = abs(hour_angle - minute_angle);
 cout<<angle<<endl;
 cout<<360-angle<<endl;
    // Return the smaller angle of two possible angles
    angle = min(360 - angle, angle);
    cout<<"Min angle "<<angle<<endl;
    
 
    return angle;
    }

int main()
{
    int H = 12,M=45;
    // cout<<(60*H + M)<<endl; // number of minutes 
    // cout<<6*M; // Angle 
    getAngle(H,M);

    return 0;
}

