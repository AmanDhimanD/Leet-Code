class Solution:
    def reverseWords(self, s: str) -> str:
		# create a word, add that word to res
        word = ""
        res = ""
        for c in s:
            if c == ' ':
                if word:
                    if not res:
                        res = word
                    else:
                        res = word + " " + res
                    word = ""
            else:
                word = word + c
        
		# Last word, if there's no ' ' at the end
        if word:
            if not res:
                res = word
            else:
                res = word + " " + res
        
        
        return res
