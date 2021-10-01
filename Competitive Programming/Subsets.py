# https://leetcode.com/problems/subsets/
# The following is a easy python solution for the problem in the above link

class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        output = [[]]
        for i in nums:
            output+=[l +[i] for l in output]
        return output
