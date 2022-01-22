class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        // return __builtin_popcount(N); //This is C++ BULIT Function of GCC Compiler
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
    }
};
