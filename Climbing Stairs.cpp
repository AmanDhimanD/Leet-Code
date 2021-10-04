class Solution {
public:
    int climbStairs(int n) {
        // if(n<=2){
        //     return n;
        // }
        // else{
        //     return (climbStairs(n-1) + climbStairs(n-2));
        // }
         vector<int> steps(3, 0);
        steps[0] = 1;
        steps[1] = 1;
        for (int i = 2; i <= n; ++i) {
            steps[i % 3] = steps[(i - 1) % 3] + steps[(i - 2) % 3];
        }
        return steps[n % 3];
        
    }
};
