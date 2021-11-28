class Solution:
    def findReplaceString(self, s: str, indices: List[int], sources: List[str], targets: List[str]) -> str:
        i = 0
        res = ""
        while i < len(s):
            ch = s[i]
            idx = indices.index(i) if i in indices else None # idx is None if not found
            if idx is not None: #case(a) mentioned above
                idx, source, target = indices[idx], sources[idx], targets[idx]
                if s[idx:idx+len(source)] == source:
                    res += target
                    i += len(source)
                else: #case(b) mentioned above
                    res += s[i]
                    i += 1
            else: # if index is not found, add current character to res and jump by 1
                res += s[i]
                i += 1
        
        return res
