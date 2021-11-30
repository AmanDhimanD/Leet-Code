class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        result = []
        n = len(nums)
        pattern = {}
        for num in nums:
            pattern[num] = pattern.get(num,0) + 1
            
        def dfs(curr,pattern):
            if n == len(curr):
                result.append(curr[:])
            
            for num in pattern:
                if pattern[num] > 0:
                    pattern[num] -= 1
                else: continue
                curr.append(num)
                dfs(curr,pattern)
                curr.pop()
                pattern[num] += 1
                
        dfs([],pattern)
        return result
