class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        int x = coordinates[0][0],y = coordinates[0][1];
        int x1 = coordinates[n-1][0],y1 = coordinates[n-1][1];
        int dx = x1-x;
        int dy = y1-y;
        for (int i = 0;i<n;i++){
            int ddx = coordinates[i][0] - coordinates[0][0];
            int ddy = coordinates[i][1] - coordinates[0][1];
            if(ddx*dy != ddy*dx) return false;
        }
        return true;
    }
};
