class Solution(object):
    def isAlienSorted(self, words, order):
        mapping = {elem:order for order,elem in enumerate(order)}
        words = [ [mapping[c] for c in w] for w in words]
        return all(w1<=w2 for w1, w2 in zip(words, words[1:]))
