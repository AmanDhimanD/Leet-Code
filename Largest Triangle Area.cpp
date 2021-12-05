class Solution {
public:
    double hammingDistance(vector<int> p1, vector<int> p2) {
        double sq = pow((p1[0]-p2[0]), 2)+pow((p1[1]- p2[1]), 2);
        return sqrt(sq);
    }
    double getArea(vector<int> p1, vector<int> p2, vector<int> p0){
        double a = hammingDistance(p0, p1);
        double b = hammingDistance(p1, p2);
        double c = hammingDistance(p2, p0);
        double s = (a+b+c)/2;
        double sq = s*(s-a)*(s-b)*(s-c);
        return sqrt(sq);
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        vector<int> res;
        double area = 0;
        int m = points.size();
        
        for(int i=0;i<m-2;i++){
            
            for(int j=i+1;j<m-1;j++){
                
                for(int k=j+1;k<m;k++){
                    
                    double finalArea = getArea(points[i], points[j], points[k]);
                    if(finalArea>area)
                        area=finalArea;
                }
            }
        }
        return area;
    }
};
