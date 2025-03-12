# week04-2.py 是今天的LeetCode挑戰題 Easy 題(二合一)
# LeetCode 2529. Maximum Count of Positive Integer and Negative Innteger
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos = 0
        neg = 0
        for i in range(len(nums)): #迴圈裡,更新它
            if nums[i] > 0: pos +=1
            if nums[i] < 0: neg +=1
        #迴圈後面,把答案拿來用
        return max(pos, neg)

