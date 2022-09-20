int getAngle(int H , int M) {
        // code here
        //return floor((11/2)*M - 30*H);
        
    float hour_angle = 0.5 * (H * 60 + M);
    float minute_angle = 6 * M;
 
    // Find the difference between two angles
    float angle = abs(hour_angle - minute_angle);
 
    // Return the smaller angle of two possible angles
    angle = min(360 - angle, angle);
 
    return angle;
    }
