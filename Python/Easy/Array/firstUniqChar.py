class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        Freq = {}
        for c in s:
            Freq[c] = Freq.get(c, 0) + 1
        for i, c in enumerate(s):
            if Freq[c] == 1:
                return i
        return -1
