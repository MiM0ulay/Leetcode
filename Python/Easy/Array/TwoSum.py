class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        nums_index={target-nums[0]:0}
        for i in range(1,len(nums)):
            if( nums[i] in nums_index) : return [nums_index[nums[i]],i]
            else :  nums_index[ target-nums[i]   ]= i
