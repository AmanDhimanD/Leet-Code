class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
       int row = matrix.size();
       int col = matrix[0].size();
        
       int rowIndex = 0;
        int colIndex = col -1;
        
        while(rowIndex<row  && colIndex>=0){
            
            int elements = matrix[rowIndex][colIndex];
            if(elements==target) {
                return 1;
            }
            if(elements<target) {
                rowIndex++;
            }
            else {
                colIndex--;
            }
        }
        return 0;
    }
};
