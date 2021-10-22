class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int t = 0, N = flowerbed.size();
        for (int i = 0; i < N; i++) {
            if (flowerbed[i] == 0) {
                if ((i == 0 || flowerbed[i-1] == 0) && (i == N-1 || flowerbed[i+1] == 0)) {
                    t++;
                    flowerbed[i] = 1;
                }
            }
        }
        return t >= n;
    }
};
